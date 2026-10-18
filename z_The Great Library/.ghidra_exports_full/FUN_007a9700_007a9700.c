// FUN_007a9700 @ 007a9700 body=[[007a9700, 007a97a7] [007a97ab, 007a97d1] [007a97d5, 007a9933] [007a9937, 007a9949]]


void FUN_007a9700(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  int *piVar7;
  int in_ECX;
  int *in_EDX;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b43350;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(int **)(*(int *)(in_ECX + 0x14) + param_3 * 4) = in_EDX;
  piVar7 = *(int **)(*(int *)(in_ECX + 4) + param_3 * 4);
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("tech_name",9);
  local_8 = 0;
  uVar6 = (**(code **)(*in_EDX + 0x18))(local_64);
  local_8 = CONCAT31(local_8._1_3_,1);
  (**(code **)(*piVar7 + 0x3c))(local_2c);
  FUN_00408ed0(uVar6,0,0xffffffff);
  FUN_00a5ecc0(uVar6,0);
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  local_8 = 0xffffffff;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  iVar4 = *(int *)(param_1 + 0x4c4);
  do {
    iVar1 = iVar4;
    if (iVar1 == 0) {
      if (*(int *)(*(int *)(param_2 + 0x2b8) + in_EDX[0xb9] * 4) != 0) {
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = (uint)local_2c[0]._1_3_ << 8;
        FUN_00409350("start_research",0xe);
        local_8 = 3;
        piVar7 = (int *)(**(code **)(*piVar7 + 0x34))(local_2c);
        uVar6 = 2;
        goto LAB_007a987f;
      }
      cVar5 = FUN_00569920();
      if (cVar5 == '\0') {
        local_34 = 0xf;
        local_38 = 0;
        local_48[0] = local_48[0] & 0xffffff00;
        FUN_00409350("start_research",0xe);
        local_8 = 5;
        piVar7 = (int *)(**(code **)(*piVar7 + 0x34))(local_48);
        (**(code **)(*piVar7 + 0x48))(4);
        uVar2 = local_48[0];
        uVar3 = local_34;
      }
      else {
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = local_2c[0] & 0xffffff00;
        FUN_00409350("start_research",0xe);
        local_8 = 4;
        piVar7 = (int *)(**(code **)(*piVar7 + 0x34))(local_2c);
        (**(code **)(*piVar7 + 0x48))(3);
        uVar2 = local_2c[0];
        uVar3 = local_18;
      }
      goto joined_r0x007a9929;
    }
    iVar4 = *(int *)(iVar1 + 0x2c);
  } while ((*(char *)(iVar1 + 0x1c) == '\0') || (*(int **)(iVar1 + 0x24) != in_EDX));
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (uint)local_2c[0]._1_3_ << 8;
  FUN_00409350("start_research",0xe);
  local_8 = 2;
  piVar7 = (int *)(**(code **)(*piVar7 + 0x34))(local_2c);
  uVar6 = 1;
LAB_007a987f:
  (**(code **)(*piVar7 + 0x48))(uVar6);
  uVar2 = local_2c[0];
  uVar3 = local_18;
joined_r0x007a9929:
  if (0xf < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uVar2);
  }
  ExceptionList = local_10;
  return;
}

