// FUN_009de0a0 @ 009de0a0 body=[[009de0a0, 009de247]]


float10 FUN_009de0a0(float param_1,float param_2)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int *in_ECX;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  int iStack_30;
  int iStack_2c;
  undefined1 auStack_28 [4];
  int aiStack_24 [2];
  float local_1c;
  float fStack_18;
  
  iVar2 = (**(code **)(*in_ECX + 0xd4))(&local_1c);
  fVar1 = *(float *)(iVar2 + 4);
  pfVar3 = (float *)(**(code **)(*in_ECX + 0xd4))(auStack_28);
  iVar2 = (int)(short)(int)*pfVar3;
  local_1c = param_1 - (float)iVar2;
  iStack_2c = (int)(short)(int)fVar1;
  iStack_30 = CONCAT22(iStack_30._2_2_,(short)(int)*pfVar3);
  aiStack_24[0] = in_ECX[0x80] + iStack_2c;
  fStack_18 = param_2 - (float)aiStack_24[0];
  fVar5 = (float10)FUN_00b35410();
  fVar6 = (float10)FUN_00b352e0();
  uVar4 = ((int)((float)fVar5 * local_1c - (float)fVar6 * fStack_18) & 0xffffU) + iStack_30 & 0xffff
  ;
  if ((((iVar2 < (int)uVar4) && ((int)uVar4 < in_ECX[0x7f] / in_ECX[0x83] + iVar2)) &&
      (uVar4 = in_ECX[0x80] + ((int)fVar1 & 0xffffU) +
               ((int)((float)fVar5 * fStack_18 + (float)fVar6 * local_1c) & 0xffffU) & 0xffff,
      iStack_2c < (int)uVar4)) && ((int)uVar4 < aiStack_24[0])) {
    (**(code **)(*in_ECX + 0xd4))(aiStack_24);
    (**(code **)(*in_ECX + 0xd4))(&iStack_30);
    (**(code **)(*in_ECX + 0x68))();
    return (float10)1;
  }
  return (float10)0;
}

