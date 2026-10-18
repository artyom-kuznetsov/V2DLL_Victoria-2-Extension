// FUN_00a296a0 @ 00a296a0 body=[[00a296a0, 00a296e8]]


void FUN_00a296a0(void)

{
  int *piVar1;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x4c) == '\0') {
    FUN_009bcda0();
    piVar1 = (int *)(in_ECX + 0x48);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)(in_ECX + 0x16c) = 0xffffffff;
      *(undefined4 *)(in_ECX + 0x168) = 0;
      *(undefined4 *)(in_ECX + 0xa4) = 0;
      *(undefined4 *)(in_ECX + 0xa8) = 0;
    }
  }
  return;
}

