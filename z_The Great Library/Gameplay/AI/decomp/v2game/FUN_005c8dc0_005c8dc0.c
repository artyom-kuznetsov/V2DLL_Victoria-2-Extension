// FUN_005c8dc0 @ 005c8dc0 body=[[005c8dc0, 005c8e0c] [005c8e10, 005c8f08]]


int * FUN_005c8dc0(int *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  undefined8 uVar5;
  
  FUN_00401000(0x3f000000);
  iVar3 = FUN_00b31c00();
  *param_1 = iVar3;
  piVar4 = (int *)in_ECX[0xe];
  if (piVar4 != (int *)0x0) {
    iVar3 = *param_1;
    do {
      iVar1 = *piVar4;
      piVar4 = (int *)piVar4[2];
      iVar3 = iVar3 + *(int *)(*(int *)(iVar1 + 0x38) + 0xb4);
    } while (piVar4 != (int *)0x0);
    *param_1 = iVar3;
  }
  if (in_ECX[0x10] != 0) {
    iVar3 = in_ECX[0x10] * 1000;
    uVar5 = __allmul(*param_1,*param_1 >> 0x1f,1000,0);
    iVar3 = __alldiv(uVar5,iVar3,iVar3 >> 0x1f);
    *param_1 = iVar3;
  }
  cVar2 = (**(code **)(*in_ECX + 0x38))();
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*in_ECX + 0x3c))();
    if (cVar2 == '\0') goto LAB_005c8ed8;
    iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + in_ECX[0x31] * 4) + 0xa60) +
                    0x70);
  }
  else {
    iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + in_ECX[0x31] * 4) + 0xa60) +
                    0x68);
  }
  iVar3 = __alldiv((longlong)*param_1 * (longlong)(iVar3 + 1000),1000,0);
  *param_1 = iVar3;
LAB_005c8ed8:
  iVar3 = __alldiv((longlong)*param_1 *
                   (longlong)(*(int *)(*(int *)(in_ECX[0x36] + 0x48) + 0x20) + 1000),1000,0);
  *param_1 = iVar3;
  return param_1;
}

