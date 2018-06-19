/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_MON_PARSE_H_INCLUDED
# define YY_YY_MON_PARSE_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    H_NUMBER = 258,
    D_NUMBER = 259,
    O_NUMBER = 260,
    B_NUMBER = 261,
    CONVERT_OP = 262,
    B_DATA = 263,
    H_RANGE_GUESS = 264,
    D_NUMBER_GUESS = 265,
    O_NUMBER_GUESS = 266,
    B_NUMBER_GUESS = 267,
    BAD_CMD = 268,
    MEM_OP = 269,
    IF = 270,
    MEM_COMP = 271,
    MEM_DISK8 = 272,
    MEM_DISK9 = 273,
    MEM_DISK10 = 274,
    MEM_DISK11 = 275,
    EQUALS = 276,
    TRAIL = 277,
    CMD_SEP = 278,
    LABEL_ASGN_COMMENT = 279,
    CMD_SIDEFX = 280,
    CMD_RETURN = 281,
    CMD_BLOCK_READ = 282,
    CMD_BLOCK_WRITE = 283,
    CMD_UP = 284,
    CMD_DOWN = 285,
    CMD_LOAD = 286,
    CMD_SAVE = 287,
    CMD_VERIFY = 288,
    CMD_IGNORE = 289,
    CMD_HUNT = 290,
    CMD_FILL = 291,
    CMD_MOVE = 292,
    CMD_GOTO = 293,
    CMD_REGISTERS = 294,
    CMD_READSPACE = 295,
    CMD_WRITESPACE = 296,
    CMD_RADIX = 297,
    CMD_MEM_DISPLAY = 298,
    CMD_BREAK = 299,
    CMD_TRACE = 300,
    CMD_IO = 301,
    CMD_BRMON = 302,
    CMD_COMPARE = 303,
    CMD_DUMP = 304,
    CMD_UNDUMP = 305,
    CMD_EXIT = 306,
    CMD_DELETE = 307,
    CMD_CONDITION = 308,
    CMD_COMMAND = 309,
    CMD_ASSEMBLE = 310,
    CMD_DISASSEMBLE = 311,
    CMD_NEXT = 312,
    CMD_STEP = 313,
    CMD_PRINT = 314,
    CMD_DEVICE = 315,
    CMD_HELP = 316,
    CMD_WATCH = 317,
    CMD_DISK = 318,
    CMD_QUIT = 319,
    CMD_CHDIR = 320,
    CMD_BANK = 321,
    CMD_LOAD_LABELS = 322,
    CMD_SAVE_LABELS = 323,
    CMD_ADD_LABEL = 324,
    CMD_DEL_LABEL = 325,
    CMD_SHOW_LABELS = 326,
    CMD_CLEAR_LABELS = 327,
    CMD_RECORD = 328,
    CMD_MON_STOP = 329,
    CMD_PLAYBACK = 330,
    CMD_CHAR_DISPLAY = 331,
    CMD_SPRITE_DISPLAY = 332,
    CMD_TEXT_DISPLAY = 333,
    CMD_SCREENCODE_DISPLAY = 334,
    CMD_ENTER_DATA = 335,
    CMD_ENTER_BIN_DATA = 336,
    CMD_KEYBUF = 337,
    CMD_BLOAD = 338,
    CMD_BSAVE = 339,
    CMD_SCREEN = 340,
    CMD_UNTIL = 341,
    CMD_CPU = 342,
    CMD_YYDEBUG = 343,
    CMD_BACKTRACE = 344,
    CMD_SCREENSHOT = 345,
    CMD_PWD = 346,
    CMD_DIR = 347,
    CMD_RESOURCE_GET = 348,
    CMD_RESOURCE_SET = 349,
    CMD_LOAD_RESOURCES = 350,
    CMD_SAVE_RESOURCES = 351,
    CMD_ATTACH = 352,
    CMD_DETACH = 353,
    CMD_MON_RESET = 354,
    CMD_TAPECTRL = 355,
    CMD_CARTFREEZE = 356,
    CMD_CPUHISTORY = 357,
    CMD_MEMMAPZAP = 358,
    CMD_MEMMAPSHOW = 359,
    CMD_MEMMAPSAVE = 360,
    CMD_COMMENT = 361,
    CMD_LIST = 362,
    CMD_STOPWATCH = 363,
    RESET = 364,
    CMD_EXPORT = 365,
    CMD_AUTOSTART = 366,
    CMD_AUTOLOAD = 367,
    CMD_MAINCPU_TRACE = 368,
    CMD_LABEL_ASGN = 369,
    L_PAREN = 370,
    R_PAREN = 371,
    ARG_IMMEDIATE = 372,
    REG_A = 373,
    REG_X = 374,
    REG_Y = 375,
    COMMA = 376,
    INST_SEP = 377,
    L_BRACKET = 378,
    R_BRACKET = 379,
    LESS_THAN = 380,
    REG_U = 381,
    REG_S = 382,
    REG_PC = 383,
    REG_PCR = 384,
    REG_B = 385,
    REG_C = 386,
    REG_D = 387,
    REG_E = 388,
    REG_H = 389,
    REG_L = 390,
    REG_AF = 391,
    REG_BC = 392,
    REG_DE = 393,
    REG_HL = 394,
    REG_IX = 395,
    REG_IY = 396,
    REG_SP = 397,
    REG_IXH = 398,
    REG_IXL = 399,
    REG_IYH = 400,
    REG_IYL = 401,
    PLUS = 402,
    MINUS = 403,
    STRING = 404,
    FILENAME = 405,
    R_O_L = 406,
    OPCODE = 407,
    LABEL = 408,
    BANKNAME = 409,
    CPUTYPE = 410,
    MON_REGISTER = 411,
    COMPARE_OP = 412,
    RADIX_TYPE = 413,
    INPUT_SPEC = 414,
    CMD_CHECKPT_ON = 415,
    CMD_CHECKPT_OFF = 416,
    TOGGLE = 417,
    MASK = 418
  };
#endif
/* Tokens.  */
#define H_NUMBER 258
#define D_NUMBER 259
#define O_NUMBER 260
#define B_NUMBER 261
#define CONVERT_OP 262
#define B_DATA 263
#define H_RANGE_GUESS 264
#define D_NUMBER_GUESS 265
#define O_NUMBER_GUESS 266
#define B_NUMBER_GUESS 267
#define BAD_CMD 268
#define MEM_OP 269
#define IF 270
#define MEM_COMP 271
#define MEM_DISK8 272
#define MEM_DISK9 273
#define MEM_DISK10 274
#define MEM_DISK11 275
#define EQUALS 276
#define TRAIL 277
#define CMD_SEP 278
#define LABEL_ASGN_COMMENT 279
#define CMD_SIDEFX 280
#define CMD_RETURN 281
#define CMD_BLOCK_READ 282
#define CMD_BLOCK_WRITE 283
#define CMD_UP 284
#define CMD_DOWN 285
#define CMD_LOAD 286
#define CMD_SAVE 287
#define CMD_VERIFY 288
#define CMD_IGNORE 289
#define CMD_HUNT 290
#define CMD_FILL 291
#define CMD_MOVE 292
#define CMD_GOTO 293
#define CMD_REGISTERS 294
#define CMD_READSPACE 295
#define CMD_WRITESPACE 296
#define CMD_RADIX 297
#define CMD_MEM_DISPLAY 298
#define CMD_BREAK 299
#define CMD_TRACE 300
#define CMD_IO 301
#define CMD_BRMON 302
#define CMD_COMPARE 303
#define CMD_DUMP 304
#define CMD_UNDUMP 305
#define CMD_EXIT 306
#define CMD_DELETE 307
#define CMD_CONDITION 308
#define CMD_COMMAND 309
#define CMD_ASSEMBLE 310
#define CMD_DISASSEMBLE 311
#define CMD_NEXT 312
#define CMD_STEP 313
#define CMD_PRINT 314
#define CMD_DEVICE 315
#define CMD_HELP 316
#define CMD_WATCH 317
#define CMD_DISK 318
#define CMD_QUIT 319
#define CMD_CHDIR 320
#define CMD_BANK 321
#define CMD_LOAD_LABELS 322
#define CMD_SAVE_LABELS 323
#define CMD_ADD_LABEL 324
#define CMD_DEL_LABEL 325
#define CMD_SHOW_LABELS 326
#define CMD_CLEAR_LABELS 327
#define CMD_RECORD 328
#define CMD_MON_STOP 329
#define CMD_PLAYBACK 330
#define CMD_CHAR_DISPLAY 331
#define CMD_SPRITE_DISPLAY 332
#define CMD_TEXT_DISPLAY 333
#define CMD_SCREENCODE_DISPLAY 334
#define CMD_ENTER_DATA 335
#define CMD_ENTER_BIN_DATA 336
#define CMD_KEYBUF 337
#define CMD_BLOAD 338
#define CMD_BSAVE 339
#define CMD_SCREEN 340
#define CMD_UNTIL 341
#define CMD_CPU 342
#define CMD_YYDEBUG 343
#define CMD_BACKTRACE 344
#define CMD_SCREENSHOT 345
#define CMD_PWD 346
#define CMD_DIR 347
#define CMD_RESOURCE_GET 348
#define CMD_RESOURCE_SET 349
#define CMD_LOAD_RESOURCES 350
#define CMD_SAVE_RESOURCES 351
#define CMD_ATTACH 352
#define CMD_DETACH 353
#define CMD_MON_RESET 354
#define CMD_TAPECTRL 355
#define CMD_CARTFREEZE 356
#define CMD_CPUHISTORY 357
#define CMD_MEMMAPZAP 358
#define CMD_MEMMAPSHOW 359
#define CMD_MEMMAPSAVE 360
#define CMD_COMMENT 361
#define CMD_LIST 362
#define CMD_STOPWATCH 363
#define RESET 364
#define CMD_EXPORT 365
#define CMD_AUTOSTART 366
#define CMD_AUTOLOAD 367
#define CMD_MAINCPU_TRACE 368
#define CMD_LABEL_ASGN 369
#define L_PAREN 370
#define R_PAREN 371
#define ARG_IMMEDIATE 372
#define REG_A 373
#define REG_X 374
#define REG_Y 375
#define COMMA 376
#define INST_SEP 377
#define L_BRACKET 378
#define R_BRACKET 379
#define LESS_THAN 380
#define REG_U 381
#define REG_S 382
#define REG_PC 383
#define REG_PCR 384
#define REG_B 385
#define REG_C 386
#define REG_D 387
#define REG_E 388
#define REG_H 389
#define REG_L 390
#define REG_AF 391
#define REG_BC 392
#define REG_DE 393
#define REG_HL 394
#define REG_IX 395
#define REG_IY 396
#define REG_SP 397
#define REG_IXH 398
#define REG_IXL 399
#define REG_IYH 400
#define REG_IYL 401
#define PLUS 402
#define MINUS 403
#define STRING 404
#define FILENAME 405
#define R_O_L 406
#define OPCODE 407
#define LABEL 408
#define BANKNAME 409
#define CPUTYPE 410
#define MON_REGISTER 411
#define COMPARE_OP 412
#define RADIX_TYPE 413
#define INPUT_SPEC 414
#define CMD_CHECKPT_ON 415
#define CMD_CHECKPT_OFF 416
#define TOGGLE 417
#define MASK 418

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 135 "mon_parse.y" /* yacc.c:1909  */

    MON_ADDR a;
    MON_ADDR range[2];
    int i;
    REG_ID reg;
    CONDITIONAL cond_op;
    cond_node_t *cond_node;
    RADIXTYPE rt;
    ACTION action;
    char *str;
    asm_mode_addr_info_t mode;

#line 393 "mon_parse.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MON_PARSE_H_INCLUDED  */
