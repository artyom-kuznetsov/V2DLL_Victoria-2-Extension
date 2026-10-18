// FUN_00a3d490 @ 00a3d490 body=[[00a3d490, 00a3d50c] [00a3d510, 00a3d578] [00a3d57c, 00a3d6bf]]


void FUN_00a3d490(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int in_ECX;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34;
  undefined4 local_24;
  uint local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b63410;
  pvStack_14 = ExceptionList;
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  ExceptionList = &pvStack_14;
  FUN_00409350(&DAT_00ded94d,0);
  local_c = 0;
  cVar1 = FUN_00416db0();
  local_c = 0xffffffff;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34);
  }
  if (cVar1 == '\0') {
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350("ButtonEffect",0xc);
    local_c = 1;
    iVar2 = FUN_009be510(param_1 + 0x6bcfc,in_ECX + 0xc4,local_50,*(undefined4 *)(param_1 + 100));
    local_c = 0xffffffff;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    if (iVar2 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = *(int **)(*(int *)(param_1 + 0x6bd00) + -4 + iVar2 * 4);
    }
    *(int **)(in_ECX + 0xe0) = piVar3;
    uVar4 = (**(code **)(*piVar3 + 0x24))(piVar3,0,&DAT_00e0bce4);
    *(undefined4 *)(in_ECX + 0xe4) = uVar4;
    uVar4 = (**(code **)(**(int **)(in_ECX + 0xe0) + 0x34))(*(int **)(in_ECX + 0xe0),&DAT_00e12e7c);
    *(undefined4 *)(in_ECX + 0xec) = uVar4;
    uVar4 = (**(code **)(**(int **)(in_ECX + 0xe0) + 0x34))(*(int **)(in_ECX + 0xe0),&DAT_00e1a0d4);
    *(undefined4 *)(in_ECX + 0xf0) = uVar4;
    uVar4 = (**(code **)(**(int **)(in_ECX + 0xe0) + 0x34))(*(int **)(in_ECX + 0xe0),&DAT_00e1a0dc);
    *(undefined4 *)(in_ECX + 0xf4) = uVar4;
    uVar4 = (**(code **)(**(int **)(in_ECX + 0xe0) + 0x34))(*(int **)(in_ECX + 0xe0),"disable");
    *(undefined4 *)(in_ECX + 0xf8) = uVar4;
    uVar4 = (**(code **)(**(int **)(in_ECX + 0xe0) + 0x24))
                      (*(int **)(in_ECX + 0xe0),0,"WorldViewProjectionMatrix");
    *(undefined4 *)(in_ECX + 0xe8) = uVar4;
  }
  uVar5 = FUN_009bcbf0(in_ECX + 0x78,1);
  *(uint *)(in_ECX + 0x9c) = uVar5;
  if ((uVar5 == 0xffffffff) || (9999 < uVar5)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(uVar5 * 0x2c + 0x15c + param_1);
  }
  *(undefined4 *)(in_ECX + 0x104) = uVar4;
  if (uVar5 < 10000) {
    uVar4 = *(undefined4 *)(uVar5 * 0x2c + 0x17c + param_1);
    uVar6 = *(undefined4 *)(uVar5 * 0x2c + 0x180 + param_1);
  }
  else {
    uVar4 = 0;
    uVar6 = 0;
  }
  *(undefined4 *)(in_ECX + 0xa0) = uVar4;
  *(undefined4 *)(in_ECX + 0xa4) = uVar6;
  FUN_00a3d720();
  ExceptionList = pvStack_14;
  return;
}

