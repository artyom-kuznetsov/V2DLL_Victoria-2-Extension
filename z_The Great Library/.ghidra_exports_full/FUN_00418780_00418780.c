// FUN_00418780 @ 00418780 body=[[00418780, 00418865]]


void FUN_00418780(int param_1,undefined4 param_2)

{
  int **ppiVar1;
  undefined4 *puVar2;
  uint uVar3;
  int in_EAX;
  int *piVar4;
  int iVar5;
  uint *unaff_ESI;
  int *local_10 [2];
  int local_8;
  
  FUN_004237e0(in_EAX);
  if (in_EAX < 1) {
    unaff_ESI[4] = 0;
    return;
  }
  local_10[1] = (int *)0x0;
  local_8 = in_EAX;
  do {
    piVar4 = (int *)FUN_005c2ad0(param_2);
    piVar4 = (int *)(**(code **)(*piVar4 + 0x48))();
    (**(code **)(*(int *)(param_1 + 0xc) + 0x10))(piVar4);
    ppiVar1 = (int **)unaff_ESI[1];
    local_10[0] = piVar4;
    if (local_10 < ppiVar1) {
      if (local_10 < (int **)*unaff_ESI) goto LAB_0041880c;
      iVar5 = (int)local_10 - (int)*unaff_ESI >> 3;
      if (ppiVar1 == (int **)unaff_ESI[2]) {
        FUN_00810820();
      }
      puVar2 = (undefined4 *)unaff_ESI[1];
      if (puVar2 != (undefined4 *)0x0) {
        uVar3 = *unaff_ESI;
        *puVar2 = *(undefined4 *)(uVar3 + iVar5 * 8);
        puVar2[1] = *(undefined4 *)(uVar3 + 4 + iVar5 * 8);
      }
    }
    else {
LAB_0041880c:
      if (ppiVar1 == (int **)unaff_ESI[2]) {
        FUN_00810820();
      }
      puVar2 = (undefined4 *)unaff_ESI[1];
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = piVar4;
        puVar2[1] = local_10[1];
      }
    }
    unaff_ESI[1] = unaff_ESI[1] + 8;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x48))(1);
      (**(code **)(*piVar4 + 0x38))();
    }
    local_8 = local_8 + -1;
    if (local_8 == 0) {
      unaff_ESI[4] = 0;
      return;
    }
  } while( true );
}

