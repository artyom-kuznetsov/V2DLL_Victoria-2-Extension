// FUN_007f2210 @ 007f2210 body=[[007f2210, 007f2371]]


void FUN_007f2210(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int local_c;
  int local_8;
  
  puVar3 = (undefined4 *)(param_1 + 0x2c8);
  iVar6 = 300;
  do {
    *(undefined1 *)(puVar3 + -3) = 0;
    *puVar3 = 0;
    puVar3 = puVar3 + 4;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  local_c = 0;
  if (0 < *(int *)(param_1 + 0x18c) * *(int *)(param_1 + 400)) {
    local_8 = 0;
    do {
      uVar1 = *(uint *)(local_8 + 0x130 + *(int *)(param_1 + 0x19c));
      uVar7 = 0;
      if (uVar1 != 0) {
        do {
          uVar5 = uVar7;
          FUN_0099e240(uVar7);
          piVar4 = (int *)FUN_00868600(uVar5);
          if ((int *)*piVar4 == (int *)0x0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)*piVar4;
          }
          uVar5 = piVar4[2];
          if (*(uint *)(iVar6 + 8) <= uVar5) {
            uVar5 = uVar5 - *(uint *)(iVar6 + 8);
          }
          piVar4 = *(int **)(*(int *)(iVar6 + 4) + uVar5 * 4);
          piVar2 = (int *)*piVar4;
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 8))(piVar2);
          }
          piVar2 = (int *)piVar4[1];
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 8))(piVar2);
          }
          piVar2 = (int *)piVar4[2];
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 8))(piVar2);
          }
          piVar4[2] = 0;
          *piVar4 = 0;
          piVar4[1] = 0;
          piVar4[3] = 0;
          piVar4[4] = 0;
          piVar4[7] = 0;
          uVar5 = uVar7;
          FUN_0099e240(uVar7);
          piVar4 = (int *)FUN_00868600(uVar5);
          if ((int *)*piVar4 == (int *)0x0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)*piVar4;
          }
          uVar5 = piVar4[2];
          if (*(uint *)(iVar6 + 8) <= uVar5) {
            uVar5 = uVar5 - *(uint *)(iVar6 + 8);
          }
          uVar7 = uVar7 + 1;
          *(undefined4 *)(*(int *)(*(int *)(iVar6 + 4) + uVar5 * 4) + 0x48) = 0xffffffff;
        } while (uVar7 < uVar1);
      }
      local_8 = local_8 + 0x3c0;
      local_c = local_c + 1;
    } while (local_c < *(int *)(param_1 + 0x18c) * *(int *)(param_1 + 400));
  }
  return;
}

