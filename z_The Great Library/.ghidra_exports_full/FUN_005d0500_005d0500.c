// FUN_005d0500 @ 005d0500 body=[[005d0500, 005d054c] [005d0550, 005d05e1]]


int * FUN_005d0500(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  undefined8 uVar5;
  undefined1 local_c [4];
  int local_8;
  
  piVar1 = *(int **)(in_ECX + 0x38);
  FUN_00401000(0x3f000000);
  iVar2 = FUN_00b31c00();
  *param_1 = iVar2;
  while (piVar1 != (int *)0x0) {
    piVar3 = (int *)*piVar1;
    piVar1 = (int *)piVar1[2];
    FUN_005bdc80();
    iVar2 = piVar3[0xf];
    piVar3 = (int *)(**(code **)(*piVar3 + 0x30))(local_c,0);
    iVar4 = *piVar3;
    if (iVar4 == 0) {
      iVar4 = -1;
    }
    else if (iVar2 + 0x189373U < 0x39580e) {
      iVar4 = (iVar2 * 1000) / iVar4;
    }
    else {
      uVar5 = __allmul(iVar2,iVar2 >> 0x1f,1000,0);
      iVar4 = __alldiv(uVar5,iVar4,iVar4 >> 0x1f);
    }
    local_8 = __alldiv((longlong)iVar4 * (longlong)local_8,1000,0);
    *param_1 = *param_1 + local_8;
  }
  return param_1;
}

