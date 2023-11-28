%{
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int yylex();
void yyerror(const char *);
extern FILE *yyin;
bool is_numeric(char* str);
void remove_quotes(char* str);
int string_to_int(char* str);
void insert_id(char *str);
bool check_id(char *str);
typedef struct node {
    char *id;
    struct node *next;
} Node;
Node *head = NULL;
int rb_number;
char checked_button_id[100];
int flag_checked = 0;
bool flag = false;

void checkPositiveInt(int integ, char attribute[]);
void checkRestrictions(int integ1, int integ2, char* less, char* more);
%}

%token LIN_LAYOUT_OPEN_TAG GT LIN_LAYOUT_CLOSE_TAG 
%token RE_LAYOUT_OPEN_TAG RE_LAYOUT_CLOSE_TAG
%token LAYOUT_WIDTH LAYOUT_HEIGHT ID ORIENTATION EQUAL
%token STRING
%token TEXT_OPEN_TAG CLOSE_TAG TEXT TEXT_COLOR
%token IMAGE_OPEN_TAG SRC PADDING
%token BUTTON_OPEN_TAG R_GROUP_OPEN_TAG R_GROUP_CLOSE_TAG R_BUTTON_OPEN_TAG CHECKED_BUTTON RB_NUMBER
%token PRO_BAR_OPEN_TAG MAX PROGRESS

%union{
    char str[20];
    char str2[20];
}

%type <str> STRING

%locations

%start layout

%%
layout : lin_layout
       | re_layout
       ;

lin_layout :  LIN_LAYOUT_OPEN_TAG lin_layout_attr GT lin_layout_content LIN_LAYOUT_CLOSE_TAG
           ;

lin_layout_attr : mandatory_attr lin_layout_opt_attr
                ;

mandatory_attr : layout_width_attr layout_height_attr
               | layout_height_attr layout_width_attr
               ;

lin_layout_opt_attr : id_attr ORIENTATION EQUAL STRING
                    | ORIENTATION EQUAL STRING id_attr
                    | id_attr
                    | ORIENTATION EQUAL STRING
                    | /* empty */
                    ;

id_attr : ID EQUAL STRING 
        { 
            insert_id($3); 

            if(flag == true && strcmp(checked_button_id, "") != 0)
            {
                if(strcmp($3, checked_button_id) == 0)
                {
                    flag_checked = 1;
                }
            }

            flag = false;
        }
        ;

layout_width_attr: LAYOUT_WIDTH EQUAL STRING {
                        if(is_numeric($3))
                        {
                            int pos_int = string_to_int($3);
                            checkPositiveInt(pos_int, "layout_width");
                        }
                        else
                        {
                            if(!((strcmp($3, "\"match_parent\"") == 0) || (strcmp($3, "\"wrap_content\"") == 0))){
                            char err_msg[] = "False android:layout_width = ";
                            strcat(err_msg, $3);
                            yyerror(err_msg); 
                            }
                        }
                        
                        
                    }
                ;

layout_height_attr: LAYOUT_HEIGHT EQUAL STRING{
                        if(is_numeric($3))
                        {
                            int pos_int = string_to_int($3);
                            checkPositiveInt(pos_int, "layout_height");
                        }
                        else
                        {
                            if(!((strcmp($3, "\"match_parent\"") == 0) || (strcmp($3, "\"wrap_content\"") == 0))){
                            char err_msg[] = "False android:layout_height = ";
                            strcat(err_msg, $3);
                            yyerror(err_msg); 
                            }
                        }
                    }
                  ;

lin_layout_content : element
                   | lin_layout_content element
                   ;

re_layout : RE_LAYOUT_OPEN_TAG re_layout_attr GT re_layout_content RE_LAYOUT_CLOSE_TAG
          ;

re_layout_attr : mandatory_attr re_layout_opt_attr
               ;

re_layout_opt_attr : id_attr
                   | /* empty */
                   ;

re_layout_content : element
                  | re_layout_content element
                  | /* empty */
                  ;

element : lin_layout 
        | re_layout
        | text_view
        | image_view
        | button
        | radio_group
        | pro_bar
        ;

text_view : TEXT_OPEN_TAG text_attr CLOSE_TAG 
          ;

text_attr : text_mandatory_attr text_opt_attr
          ;

text_mandatory_attr : mandatory_attr TEXT EQUAL STRING 
                    | TEXT EQUAL STRING mandatory_attr 
                    | layout_height_attr TEXT EQUAL STRING layout_width_attr
                    | layout_width_attr STRING TEXT EQUAL STRING layout_height_attr
                    ;      

text_opt_attr : id_attr TEXT_COLOR EQUAL STRING
              | TEXT_COLOR EQUAL STRING id_attr
              | id_attr
              | TEXT_COLOR EQUAL STRING
              | /* empty */
              ;

image_view : IMAGE_OPEN_TAG image_attr CLOSE_TAG    
           ;

image_attr : image_mandatory_attr image_and_button_opt_attr
           ;

image_mandatory_attr : mandatory_attr SRC EQUAL STRING 
                    | SRC EQUAL STRING mandatory_attr 
                    | layout_height_attr SRC EQUAL STRING layout_width_attr
                    | layout_width_attr SRC EQUAL STRING layout_height_attr
                    ;

image_and_button_opt_attr : id_attr padding_attr
                        | padding_attr id_attr
                        | id_attr
                        | padding_attr
                        | /* empty */
                        ;

padding_attr : PADDING EQUAL STRING
{
    int pos_int = string_to_int($3);
    checkPositiveInt(pos_int, "padding");
}
;

button : BUTTON_OPEN_TAG button_attr CLOSE_TAG 
       ;

button_attr : button_mandatory_attr image_and_button_opt_attr
          ;

button_mandatory_attr : mandatory_attr TEXT EQUAL STRING
                      | TEXT EQUAL STRING mandatory_attr
                      | layout_width_attr TEXT EQUAL STRING layout_height_attr
                      | layout_height_attr TEXT EQUAL STRING layout_width_attr
                      ;

radio_group : R_GROUP_OPEN_TAG r_group_attr GT r_group_content R_GROUP_CLOSE_TAG    
            ;

r_group_attr : r_group_mandatory_attr r_group_opt_attr
             ;

r_group_mandatory_attr : mandatory_attr rb_number_attr 
                       | rb_number_attr mandatory_attr 
                       | layout_height_attr rb_number_attr layout_width_attr 
                       | layout_width_attr rb_number_attr layout_height_attr
                       ;

rb_number_attr : RB_NUMBER EQUAL STRING 
                    { 
                        int pos_int = string_to_int($3);
                        checkPositiveInt(pos_int, "rb_number"); 
                        rb_number = pos_int;
                    }
              ;

r_group_opt_attr : id_attr checked_button_attr
                 | checked_button_attr id_attr
                 | id_attr
                 | checked_button_attr
                 | /* empty */
                 ;

checked_button_attr : CHECKED_BUTTON EQUAL STRING
{
    strcpy(checked_button_id, $3);
}
;

r_group_content : radio_button
                | r_group_content radio_button
                ;

radio_button : R_BUTTON_OPEN_TAG radio_button_attr CLOSE_TAG     
             ;

radio_button_attr : radio_button_mandatory_attr radio_button_opt_attr
                  ;

radio_button_mandatory_attr : mandatory_attr TEXT EQUAL STRING 
                            | TEXT EQUAL STRING mandatory_attr 
                            | layout_height_attr TEXT EQUAL STRING layout_width_attr
                            | layout_width_attr TEXT EQUAL STRING layout_height_attr
                            ;

radio_button_opt_attr : { flag = true; } id_attr 
              | /* empty */
              ;

pro_bar : PRO_BAR_OPEN_TAG pro_bar_attr CLOSE_TAG;

pro_bar_attr: mandatory_attr pro_bar_opt_attr
            ;

pro_bar_opt_attr: id_attr
                | max_attr
                | progress_attr

                | id_attr max_attr
                | max_id_attr
                | id_attr progress_attr
                | progress_id_attr
                | max_progress_attr
                | progress_max_attr 

                | all_three_ProgressBar_attr
                | /* empty */
                ;

max_attr: MAX EQUAL STRING { checkPositiveInt(string_to_int($3), "max"); }
;

progress_attr: PROGRESS EQUAL STRING{ checkPositiveInt(string_to_int($3), "progress"); }
;

max_id_attr: MAX EQUAL STRING id_attr{ checkPositiveInt(string_to_int($3), "max"); }
;

progress_id_attr: PROGRESS EQUAL STRING id_attr{ checkPositiveInt(string_to_int($3), "progress"); }  

max_progress_attr: MAX EQUAL STRING PROGRESS EQUAL STRING{ 
    checkPositiveInt(string_to_int($3), "max");
    checkPositiveInt(string_to_int($6), "progress");
    checkRestrictions(string_to_int($3),string_to_int($6), "max", "progress");
                }
;

progress_max_attr: PROGRESS EQUAL STRING MAX EQUAL STRING{
    checkPositiveInt(string_to_int($3), "progress");
    checkPositiveInt(string_to_int($6), "max");
    checkRestrictions(string_to_int($6),string_to_int($3), "max", "progress");
                }
;

all_three_ProgressBar_attr: id_attr max_progress_attr
                          | id_attr progress_max_attr
                          | max_progress_attr id_attr
                          | progress_max_attr id_attr
                          | MAX EQUAL STRING id_attr PROGRESS EQUAL STRING{
                            checkPositiveInt(string_to_int($3), "max");
                            checkPositiveInt(string_to_int($7), "progress");
                            checkRestrictions(string_to_int($3),string_to_int($7), "max", "progress");
                            }
                        | PROGRESS EQUAL STRING id_attr MAX EQUAL STRING{
                            checkPositiveInt(string_to_int($7), "max");
                            checkPositiveInt(string_to_int($3), "progress");
                            checkRestrictions(string_to_int($7),string_to_int($3), "max", "progress");
                            }
                          ;

%%
bool is_numeric(char* str) {

    char local_str[20];
    strcpy(local_str, str);
    remove_quotes(local_str);
    // Check the first character
    int i = 0;
    if (local_str[0] == '-') {
        // If we have  a minus sign, we go to the next  character
        i = 1;
    }
    // Check the rest of the  characters
    while (local_str[i] != '\0') {
        // If a character is not a number, return false
        if (local_str[i] < '0' || local_str[i] > '9') {
            return false;
        }
        i++;
    }
    
    return true;
}

void remove_quotes(char* str) {
    int length = strlen(str);
    
    //  We check how long is the string  for it to have quotes 
    if (length >= 2 && str[0] == '"' && str[length - 1] == '"') {
        // We substract by shifting left 
        for (int i = 0; i < length - 1; i++) {
            str[i] = str[i + 1];
        }
        
        // We substaract the final quote and replace it 
        str[length - 2] = '\0';
    }
}

int string_to_int(char* str)
{
    remove_quotes(str);
    return atoi(str);
}

void insert_id(char *str)
{

    Node *newNode = malloc(sizeof(Node));
    newNode->id = malloc((strlen(str) + 1) * sizeof(char));
    strcpy(newNode->id, str);
    newNode->next = head;
    head = newNode;

    bool id_exists = false;
    id_exists = check_id(str);

    if(id_exists)
    {
        char err_msg[] = "Duplicate android:id ";
        strcat(err_msg, str);
        yyerror(err_msg); 
    }
}

bool check_id(char *str)
{
    bool id_exists = false;

    Node *current = head->next;
    // we check if new id exists
    while (current != NULL) {
        if(strcmp(current->id, str)==0)
            id_exists = true;
        current = current->next;
    }

    return id_exists;
}

void checkPositiveInt(int integ, char attribute[]){
       if(integ<=0){
                char err_msg[50] = "False android:";
                            char str1[20];
                            sprintf(str1, "%d", integ); // Convert pos_int into string
                            strcat(err_msg, attribute); 
                            strcat(err_msg, " = \"");
                            strcat(err_msg, str1);
                            strcat(err_msg, "\"");
                            yyerror(err_msg); 
            }
}

void checkRestrictions(int integ1, int integ2, char* less, char* more){
    if(integ1<integ2){
                        char str[20];
                        char str2[20];
                        sprintf(str, "%d", integ1); 
                        sprintf(str2, "%d", integ2); 

                        char err_msg[50] = "False android:" ;
                        strcat(err_msg, less); 
                        strcat(err_msg, " = \"");
                        strcat(err_msg, str);
                        strcat(err_msg, "\"");
                        strcat(err_msg, " is less than android:");
                        strcat(err_msg, more);
                        strcat(err_msg, " = \""); 
                        strcat(err_msg, str2);
                        strcat(err_msg, "\"");

                        yyerror(err_msg); 
                    }
}

int main(int argc, char **argv) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <inpufile>\n", argv[0]);
        return 1;
    }

    FILE *input_file = fopen(argv[1], "r");
    char line[100];
    if (!input_file) {
        perror("Input file did not open succesfully");
        return 1;
    }
    
    yyin = input_file;
    
    yyparse();

    printf("\n\nYour XML code was compiled succesfully\n");

    fclose(input_file);

    return 0;
}

