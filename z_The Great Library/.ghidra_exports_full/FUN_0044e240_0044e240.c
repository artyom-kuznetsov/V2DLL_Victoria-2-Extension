// FUN_0044e240 @ 0044e240 body=[[0044e240, 0044e2d1] [0044e2e7, 0044e33c]]


/* WARNING: Removing unreachable block (ram,0x0044e2c9) */

void FUN_0044e240(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  char *pcVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bbc108;
  local_10 = ExceptionList;
  if (param_2 == 0x2a1) {
    pcVar3 = (char *)(param_1 + 0x22c);
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    ExceptionList = &local_10;
    FUN_00409350((char *)(param_1 + 0x22c),(int)pcVar3 - (param_1 + 0x22d));
    FUN_0043bb10();
  }
  else if (param_2 == 0x3b8) {
    pcVar3 = (char *)(param_1 + 0x22c);
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    ExceptionList = &local_10;
    FUN_00409350();
    local_8 = 0;
    FUN_0044ce30();
    uVar2 = FUN_005661b0();
    *(undefined4 *)(in_ECX + 8) = uVar2;
  }
  ExceptionList = local_10;
  return;
}

