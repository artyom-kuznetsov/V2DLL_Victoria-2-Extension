// FUN_00a400a0 @ 00a400a0 body=[[00a400a0, 00a400ed] [00a400f1, 00a400f7]]


/* WARNING: Removing unreachable block (ram,0x00a400e5) */

undefined4 FUN_00a400a0(void)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  char *in_EDX;
  
  pcVar2 = in_EDX;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(in_EDX,(int)pcVar2 - (int)(in_EDX + 1));
  uVar3 = FUN_00a3f120();
  return uVar3;
}

