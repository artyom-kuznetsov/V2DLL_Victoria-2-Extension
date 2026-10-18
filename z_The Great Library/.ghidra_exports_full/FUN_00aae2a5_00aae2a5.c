// FUN_00aae2a5 @ 00aae2a5 body=[[00aae2a5, 00aae2b1]]


char * FUN_00aae2a5(void)

{
  char *pcVar1;
  int in_ECX;
  
  pcVar1 = *(char **)(in_ECX + 4);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "Unknown exception";
  }
  return pcVar1;
}

