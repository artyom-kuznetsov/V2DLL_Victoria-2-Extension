// FUN_00a20120 @ 00a20120 body=[[00a20120, 00a20244]]


void FUN_00a20120(int *param_1)

{
  int iVar1;
  int *in_ECX;
  int *piVar2;
  int *piVar3;
  float fStack_5c;
  undefined4 local_54;
  undefined8 local_50;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  in_ECX[0x3f] = (int)(float)*param_1;
  in_ECX[0x40] = (int)(float)param_1[1];
  FUN_005da1e0();
  local_50 = (double)*(ushort *)((int)in_ECX + 0x106) * 0.5;
  iVar1 = (**(code **)(*in_ECX + 0xd8))(&local_54);
  fStack_18 = (float)((double)CONCAT44((undefined4)local_50,local_54) -
                     (double)(int)*(short *)(iVar1 + 2)) - (float)param_1[1];
  uStack_14 = DAT_00f092dc;
  fStack_1c = (float)*param_1 + fStack_5c;
  uStack_10 = DAT_00f092fc;
  piVar2 = (int *)((int)&local_50 + 4);
  piVar3 = in_ECX + 0x25;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  return;
}

