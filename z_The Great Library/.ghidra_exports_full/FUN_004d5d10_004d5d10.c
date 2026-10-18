// FUN_004d5d10 @ 004d5d10 body=[[004d5d10, 004d5e8c]]


int FUN_004d5d10(void)

{
  int in_EAX;
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int local_18;
  int local_14 [2];
  int local_c;
  
  FUN_00401000(((float)(*(int *)(in_EAX + 0x4c) - *(int *)(in_EAX + 0x48) >> 2) + 0.0005) * 1000.0);
  iVar1 = FUN_00b31c00();
  iVar4 = DAT_012586dc;
  local_c = __alldiv((longlong)*(int *)(*(int *)(DAT_012586dc + 0x40) + 0x138) * (longlong)iVar1,
                     1000,0);
  iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(in_EAX + 0x268) * 4);
  local_14[0] = *(int *)(in_EAX + 0x58);
  FUN_004a0e80(DAT_0125870c,&local_18);
  iVar4 = *(int *)(*(int *)(iVar4 + 0x40) + 0x144);
  local_14[0] = 1000;
  if (iVar4 == 0) {
    local_18 = -1;
  }
  else if (local_18 + 0x189373U < 0x39580e) {
    local_18 = (local_18 * 1000) / iVar4;
  }
  else {
    uVar5 = __allmul(local_18,local_18 >> 0x1f,1000,0);
    local_18 = (int)((ulonglong)uVar5 >> 0x20);
    local_18 = __alldiv(uVar5,iVar4,iVar4 >> 0x1f);
  }
  piVar2 = &local_18;
  if (999 < local_18) {
    piVar2 = local_14;
  }
  iVar4 = *piVar2;
  local_14[0] = *(int *)(in_EAX + 0x58);
  iVar3 = FUN_0050e450();
  if (*(int *)(iVar1 + 0xe8) == iVar3) {
    iVar4 = 0;
  }
  iVar1 = __alldiv((longlong)local_c * (longlong)iVar4,1000,0);
  return iVar1 / 1000;
}

