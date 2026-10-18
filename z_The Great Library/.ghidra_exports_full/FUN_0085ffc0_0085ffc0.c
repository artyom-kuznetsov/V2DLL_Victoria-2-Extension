// FUN_0085ffc0 @ 0085ffc0 body=[[0085ffc0, 008600f2]]


bool FUN_0085ffc0(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  float10 fVar4;
  undefined8 uVar5;
  int local_10;
  undefined4 local_c;
  float local_8;
  
  iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0xc) * 4);
  if (*(char *)(*(int *)(in_EAX + 4) + *(int *)(iVar2 + 0xd08)) != '\0') {
    return true;
  }
  FUN_004a0e80(DAT_0125870c,&local_10);
  local_c = *(undefined4 *)(in_ECX + 8);
  iVar1 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0xc) * 4) + 0xe4c);
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  fVar4 = (float10)FUN_00401030((float)iVar1);
  local_8 = (float)(fVar4 + (float10)0.0005000000237487257) * 1000.0;
  FUN_00401000(local_8);
  iVar1 = FUN_00b31c00();
  uVar5 = __allmul(local_10,local_10 >> 0x1f,1000,0);
  iVar1 = __alldiv(uVar5,iVar1,iVar1 >> 0x1f);
  iVar3 = 40000;
  if (*(char *)(iVar2 + 0x31) == '\0') {
    iVar2 = FUN_005379e0();
    if (iVar2 != 1) goto LAB_008600dc;
  }
  iVar3 = 50000;
LAB_008600dc:
  return iVar1 == iVar3 || iVar1 - iVar3 < 0;
}

