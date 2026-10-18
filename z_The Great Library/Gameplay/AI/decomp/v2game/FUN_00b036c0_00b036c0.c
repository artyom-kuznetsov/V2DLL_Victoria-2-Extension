// FUN_00b036c0 @ 00b036c0 body=[[00b036c0, 00b0370e] [00b03710, 00b037aa]]


void FUN_00b036c0(int param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int in_ECX;
  int *piVar5;
  uint uVar6;
  
  iVar3 = param_1;
  uVar6 = param_2[1];
  uVar1 = *(uint *)(param_1 + 0x84);
  if (((uVar1 != uVar6) && (param_2[1] = uVar1, uVar6 < uVar1)) && ((uint)param_2[2] < uVar1)) {
    FUN_00ad8720(uVar1);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  uVar6 = 0;
  if (uVar1 != 0) {
    param_1 = 0;
    do {
      uVar4 = 0;
      if (*(uint *)(in_ECX + 0x48) != 0) {
        piVar5 = *(int **)(in_ECX + 0x44);
        do {
          if (*(int *)(*piVar5 + 100) ==
              *(int *)(*(int *)(*(int *)(iVar3 + 0x80) + uVar6 * 4) + 0x10)) {
            if (*(int *)(*(int *)(in_ECX + 0x44) + uVar4 * 4) != 0) {
              FUN_00ad5410(uVar6,uVar2,*param_2 + param_1);
              goto LAB_00b0375f;
            }
            break;
          }
          uVar4 = uVar4 + 1;
          piVar5 = piVar5 + 1;
        } while (uVar4 < *(uint *)(in_ECX + 0x48));
      }
      FUN_00ad5410(uVar6,uVar2,*param_2 + param_1);
LAB_00b0375f:
      param_1 = param_1 + 0x40;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  FUN_00ad6210(param_2,param_3);
  return;
}

