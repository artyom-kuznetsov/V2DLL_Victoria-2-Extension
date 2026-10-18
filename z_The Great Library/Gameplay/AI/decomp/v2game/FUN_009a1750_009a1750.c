// FUN_009a1750 @ 009a1750 body=[[009a1750, 009a17fc] [009a1800, 009a180f]]


void FUN_009a1750(undefined4 param_1,char param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int in_ECX;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  local_8 = 0;
  pcVar2 = (char *)(in_ECX + 0x22c);
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_10;
  FUN_00409350((char *)(in_ECX + 0x22c),(int)pcVar2 - (in_ECX + 0x22d));
  if (param_2 == '\0') {
    param_2 = '\n';
    iVar3 = FUN_005484e0(local_2c,&param_2,1);
    if (iVar3 != -1) {
      FUN_009a1140();
      FUN_00409350("Unreadable String",0x11);
      goto LAB_009a17ec;
    }
  }
  FUN_00408ed0(local_2c,0,0xffffffff);
LAB_009a17ec:
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  ExceptionList = local_10;
  return;
}

