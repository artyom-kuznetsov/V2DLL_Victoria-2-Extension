// FUN_00a5edf0 @ 00a5edf0 body=[[00a5edf0, 00a5eec7]]


float10 FUN_00a5edf0(float param_1,float param_2)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  int iVar4;
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  iVar2 = FUN_00a5eef0();
  iVar2 = *(int *)(iVar2 + 4);
  fVar1 = (float)in_ECX[0x32];
  piVar3 = (int *)FUN_00a5eef0();
  iVar4 = (int)(short)(int)((float)*piVar3 + (float)in_ECX[0x31]);
  if ((iVar4 < (int)((int)param_1 & 0xffffU)) &&
     ((int)((int)param_1 & 0xffffU) < in_ECX[0x68] + iVar4)) {
    iVar2 = (int)(short)(int)((float)iVar2 - fVar1);
    if ((iVar2 < (int)((int)param_2 & 0xffffU)) &&
       ((int)((int)param_2 & 0xffffU) < in_ECX[0x69] + iVar2)) {
      (**(code **)(*in_ECX + 0xd4))(local_c);
      (**(code **)(*in_ECX + 0xd4))(local_14);
      (**(code **)(*in_ECX + 0x68))();
      if ((char)in_ECX[0x74] == '\0') {
        return (float10)1;
      }
    }
  }
  return (float10)0;
}

