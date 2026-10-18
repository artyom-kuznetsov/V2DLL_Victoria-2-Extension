// FUN_00b13d30 @ 00b13d30 body=[[00b13d30, 00b13df3]]


int * FUN_00b13d30(int *param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (((uint)param_1[2] < 0x800) || (iVar2 = *param_1, iVar2 == 0)) {
    param_1[1] = 0x800;
    param_1[2] = 0x800;
    if (*param_1 == 0) {
      iVar2 = (*(code *)PTR_FUN_00f01b08)(0x801,2,4,1,0,0xffffffff);
    }
    else {
      iVar2 = (*(code *)PTR_FUN_00f01b0c)(*param_1);
    }
    *param_1 = iVar2;
    if (iVar2 == 0) goto LAB_00b13d88;
  }
  else {
    param_1[1] = 0x800;
  }
  *(undefined1 *)(iVar2 + 0x800) = 0;
LAB_00b13d88:
  uVar1 = _vsprintf((char *)*param_1,param_2,&stack0x0000000c);
  if ((uVar1 <= (uint)param_1[2]) && (*param_1 != 0)) {
    param_1[1] = uVar1;
    *(undefined1 *)(*param_1 + uVar1) = 0;
    return param_1;
  }
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  if (*param_1 == 0) {
    iVar2 = (*(code *)PTR_FUN_00f01b08)(uVar1 + 1,2,4,1,0,0xffffffff);
  }
  else {
    iVar2 = (*(code *)PTR_FUN_00f01b0c)(*param_1);
  }
  *param_1 = iVar2;
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + uVar1) = 0;
  }
  return param_1;
}

