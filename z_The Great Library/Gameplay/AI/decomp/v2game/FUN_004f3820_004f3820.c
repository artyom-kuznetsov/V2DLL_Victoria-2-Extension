// FUN_004f3820 @ 004f3820 body=[[004f3820, 004f38f8]]


int * FUN_004f3820(int *param_1)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  FUN_00401000(((float)*(int *)(in_EAX + 0x20) + 0.0005) * 1000.0);
  iVar1 = FUN_00b31c00();
  iVar1 = __alldiv((longlong)(*(int *)(*(int *)(*(int *)(in_EAX + 0x18) + 300) + 0x128) * 1000) *
                   (longlong)iVar1,1000,0);
  iVar2 = *(int *)(in_EAX + 0x128) * 1000;
  if (iVar1 == 0) {
    *param_1 = -1;
    return param_1;
  }
  if (iVar2 + 0x189373U < 0x39580e) {
    *param_1 = (*(int *)(in_EAX + 0x128) * 1000000) / iVar1;
    return param_1;
  }
  uVar3 = __allmul(iVar2,iVar2 >> 0x1f,1000,0);
  iVar1 = __alldiv(uVar3,iVar1,iVar1 >> 0x1f);
  *param_1 = iVar1;
  return param_1;
}

