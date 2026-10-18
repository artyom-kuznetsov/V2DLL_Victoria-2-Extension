// FUN_0085fe40 @ 0085fe40 body=[[0085fe40, 0085ffba]]


void FUN_0085fe40(int *param_1)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int in_ECX;
  float10 fVar4;
  undefined8 uVar5;
  int local_8;
  
  iVar3 = DAT_012587e4;
  FUN_004a0e80(DAT_0125870c,&local_8);
  uVar5 = __allmul(local_8,local_8 >> 0x1f,4000,0);
  local_8 = __alldiv(uVar5,1000,0);
  iVar3 = *(int *)(iVar3 + 4);
  iVar2 = *(int *)(iVar3 + *(int *)(in_ECX + 4) * 4);
  iVar1 = *(int *)(iVar2 + 0xd8c);
  iVar2 = *(int *)(iVar2 + 0xd88);
  if (iVar2 != iVar1) {
    do {
      if (*(int *)(iVar2 + 4) == *(int *)(in_EAX + 4)) break;
      iVar2 = iVar2 + 8;
    } while (iVar2 != iVar1);
    if (iVar2 != iVar1) {
      uVar5 = __allmul(local_8,local_8 >> 0x1f,1000,0);
      local_8 = __alldiv(uVar5,2000,0);
    }
  }
  iVar2 = *(int *)(*(int *)(iVar3 + *(int *)(in_EAX + 4) * 4) + 0xe4c);
  iVar3 = *(int *)(*(int *)(iVar3 + *(int *)(in_ECX + 4) * 4) + 0xe4c);
  if (iVar3 < iVar2) {
    iVar2 = iVar3;
  }
  fVar4 = (float10)FUN_00401030((float)iVar2);
  FUN_00401000((float)(fVar4 + (float10)0.0005000000237487257) * 1000.0);
  iVar3 = FUN_00b31c00();
  if (iVar3 == 0) {
    iVar3 = 1000;
  }
  else {
    uVar5 = __allmul(local_8,local_8 >> 0x1f,1000,0);
    iVar3 = __alldiv(uVar5,iVar3,iVar3 >> 0x1f);
  }
  if (0 < iVar3 + -150000) {
    *param_1 = *param_1 - (iVar3 + -150000);
  }
  return;
}

