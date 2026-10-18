// FUN_00aeb300 @ 00aeb300 body=[[00aeb300, 00aeb39d]]


int * FUN_00aeb300(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  int *in_ECX;
  uint uVar7;
  
  uVar7 = 0;
  piVar4 = (int *)(*(code *)PTR_FUN_00f01b08)(0x14,0xcb,4,0,0,0xffffffff);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    *piVar4 = 0;
    piVar4[1] = 0;
    piVar4[2] = 0;
    piVar4[4] = param_1;
    *(undefined2 *)(piVar4 + 3) = 0xcb;
  }
  uVar2 = in_ECX[1];
  if (uVar2 != 0) {
    do {
      uVar5 = (**(code **)(**(int **)(*in_ECX + uVar7 * 4) + 0xc))(param_1,param_2);
      iVar3 = piVar4[1];
      uVar6 = iVar3 + 1;
      piVar4[1] = uVar6;
      if ((uint)piVar4[2] < uVar6) {
        FUN_00aeb6c0(iVar3 + 2);
      }
      puVar1 = (undefined4 *)(*piVar4 + -4 + piVar4[1] * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = uVar5;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar2);
  }
  return piVar4;
}

