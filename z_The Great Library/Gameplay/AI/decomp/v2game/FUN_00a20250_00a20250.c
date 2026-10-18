// FUN_00a20250 @ 00a20250 body=[[00a20250, 00a202de]]


void FUN_00a20250(int *param_1)

{
  float fVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int *in_ECX;
  undefined1 local_8 [4];
  
  iVar4 = (**(code **)(*in_ECX + 0xd8))(local_8);
  uVar2 = *(ushort *)((int)in_ECX + 0x106);
  fVar1 = (float)in_ECX[0x22];
  sVar3 = *(short *)(iVar4 + 2);
  *param_1 = (int)((float)*(ushort *)(in_ECX + 0x41) * 0.5 + (float)in_ECX[0x21]);
  param_1[1] = (int)(((float)(int)sVar3 + (fVar1 - (float)uVar2 * 0.5)) * -1.0);
  return;
}

