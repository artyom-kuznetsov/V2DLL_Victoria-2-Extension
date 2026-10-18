// FUN_00a42620 @ 00a42620 body=[[00a42620, 00a4279d]]


void FUN_00a42620(void)

{
  float *pfVar1;
  float *pfVar2;
  int *in_EAX;
  int iVar3;
  int iVar4;
  int in_EDX;
  int iVar5;
  
  if (in_EDX == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = in_EDX + 1;
  }
  if (((iVar3 == 0) || (iVar4 = iVar3 + -1, iVar4 == 0)) || (iVar3 == 0)) {
    iVar5 = 0;
  }
  else {
    iVar5 = iVar4;
    if ((iVar4 != 0) && (iVar3 != 0)) goto LAB_00a42651;
  }
  iVar4 = 0;
LAB_00a42651:
  pfVar1 = *(float **)(iVar4 + 8);
  pfVar2 = *(float **)(iVar4 + 4);
  *(float *)(in_EDX + 0xc) = pfVar2[1] * pfVar1[1] + *pfVar2 * *pfVar1 + pfVar2[2] * pfVar1[2];
  if ((iVar5 == 0) || (iVar3 = iVar5, iVar5 == -1)) {
    iVar3 = 0;
  }
  iVar4 = *(int *)(iVar3 + 8);
  pfVar1 = *(float **)(iVar3 + 4);
  *(float *)(in_EDX + 0x10) =
       *(float *)(iVar4 + 0x10) * pfVar1[1] + *pfVar1 * *(float *)(iVar4 + 0xc) +
       *(float *)(iVar4 + 0x14) * pfVar1[2];
  if ((iVar5 == 0) || (iVar5 == -1)) {
    iVar5 = 0;
  }
  iVar3 = *(int *)(iVar5 + 8);
  pfVar1 = *(float **)(iVar5 + 4);
  *(float *)(in_EDX + 0x14) =
       *(float *)(iVar3 + 0x1c) * pfVar1[1] + *(float *)(iVar3 + 0x18) * *pfVar1 +
       *(float *)(iVar3 + 0x20) * pfVar1[2];
  *in_EAX = in_EDX + 0xc;
  return;
}

