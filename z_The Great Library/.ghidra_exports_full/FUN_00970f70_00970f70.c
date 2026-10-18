// FUN_00970f70 @ 00970f70 body=[[00970f70, 0097107b] [0097107f, 00971151]]


void FUN_00970f70(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  int in_ECX;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  if (param_2 < 0x613) {
    if (param_2 == 0x612) {
      *(bool *)(in_ECX + 0xc) = *(int *)(param_1 + 0x228) == 0x29f;
      return;
    }
    if (param_2 == 0x6c) {
      ExceptionList = &local_10;
      uVar3 = FUN_00aaf0c5(param_1 + 0x22c);
      *(undefined4 *)(in_ECX + 8) = uVar3;
      ExceptionList = local_10;
      return;
    }
    if (param_2 == 0x26a) {
      ExceptionList = &local_10;
      FUN_009a1750(in_ECX + 0x60,0);
      ExceptionList = local_10;
      return;
    }
  }
  else {
    if (param_2 == 0x7a8) {
      *(bool *)(in_ECX + 0x44) = *(int *)(param_1 + 0x228) == 0x29f;
      return;
    }
    if (param_2 == 0x7bd) {
      ExceptionList = &local_10;
      FUN_009a1bb0(in_ECX + 0x5c);
      if (*(int *)(in_ECX + 8) != 0) {
        ExceptionList = local_10;
        return;
      }
      *(undefined4 *)(in_ECX + 8) = 0x30;
      ExceptionList = local_10;
      return;
    }
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  pcVar4 = (char *)(param_1 + 0x24);
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_10;
  FUN_00409350((char *)(param_1 + 0x24),(int)pcVar4 - (param_1 + 0x25));
  local_8 = 0;
  iVar5 = FUN_00973bd0(local_2c);
  local_8 = 0xffffffff;
  if (local_18 < 0x10) {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    if ((iVar5 != 0) && (*(int *)(param_1 + 0x228) == 0x29f)) {
      iVar2 = *(int *)(in_ECX + 0x14);
      piVar6 = (int *)FUN_00aae9af(0x10);
      if (piVar6 == (int *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        *piVar6 = iVar5;
        piVar6[1] = iVar2;
        piVar6[2] = 0;
        *(undefined1 *)(piVar6 + 3) = 0;
      }
      iVar5 = *(int *)(in_ECX + 0x18);
      *(int **)(in_ECX + 0x14) = piVar6;
      *(int *)(in_ECX + 0x18) = iVar5 + 1;
      if (iVar5 == 0) {
        *(int **)(in_ECX + 0x10) = piVar6;
        ExceptionList = local_10;
        return;
      }
      *(int **)(iVar2 + 8) = piVar6;
    }
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_2c[0]);
}

