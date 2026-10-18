// FUN_00b18870 @ 00b18870 body=[[00b18870, 00b188f6]]


size_t FUN_00b18870(void *param_1,size_t param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int iVar4;
  
  iVar3 = in_ECX[1];
  iVar1 = in_ECX[2];
  if (((uint)(iVar3 + in_ECX[3]) < iVar1 + param_2) && ((char)in_ECX[6] != '\0')) {
    iVar4 = (in_ECX[5] - iVar3) + iVar1 + param_2;
    iVar2 = (*(code *)PTR_FUN_00f01b0c)(iVar3,in_ECX[3] + iVar4,4,4,0,0,0);
    in_ECX[3] = in_ECX[3] + iVar4;
    in_ECX[1] = iVar2;
    in_ECX[2] = iVar2 + (iVar1 - iVar3);
  }
  FID_conflict__memcpy((void *)in_ECX[2],param_1,param_2);
  (**(code **)(*in_ECX + 0x80))(param_2);
  iVar3 = (**(code **)(*in_ECX + 0x74))();
  in_ECX[4] = iVar3;
  return param_2;
}

