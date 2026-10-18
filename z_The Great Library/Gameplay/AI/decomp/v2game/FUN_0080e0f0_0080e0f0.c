// FUN_0080e0f0 @ 0080e0f0 body=[[0080e0f0, 0080e283]]


float10 FUN_0080e0f0(void)

{
  float *pfVar1;
  int in_ECX;
  int iVar2;
  float *pfVar3;
  float in_stack_00000010;
  float in_stack_00000014;
  float in_stack_00000018;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88 [5];
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  if (*(char *)(in_ECX + 0x4d) == '\0') {
    return (float10)DAT_00f092dc;
  }
  pfVar1 = (float *)FUN_007eb4f0(in_ECX + 0x94);
  pfVar3 = local_88;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar3 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    pfVar3 = pfVar3 + 1;
  }
  D3DXMatrixInverse(local_88,0,local_88);
  FUN_0080e290(in_ECX,fStack_64,uStack_60,uStack_5c,
               CONCAT44(local_88[2] * in_stack_00000014 + fStack_90 * in_stack_00000010 +
                        fStack_70 * in_stack_00000018,
                        local_88[1] * in_stack_00000014 + fStack_94 * in_stack_00000010 +
                        fStack_74 * in_stack_00000018),
               local_88[3] * in_stack_00000014 + fStack_8c * in_stack_00000010 +
               fStack_6c * in_stack_00000018);
  return (float10)fStack_64;
}

