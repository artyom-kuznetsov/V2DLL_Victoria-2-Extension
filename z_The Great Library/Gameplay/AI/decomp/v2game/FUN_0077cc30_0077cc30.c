// FUN_0077cc30 @ 0077cc30 body=[[0077cc30, 0077cced]]


void FUN_0077cc30(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  undefined4 local_c;
  int *local_8;
  
  local_8 = (int *)(unaff_EDI + 8);
  iVar3 = 0;
  do {
    piVar1 = (int *)*local_8;
    if (param_1 == iVar3) {
      if (*(char *)((int)piVar1 + 0x4f) == '\0') {
        (**(code **)(*piVar1 + 0x108))();
        (**(code **)(*piVar1 + 0x34))();
      }
      if (param_2 != -1) {
        (**(code **)(*piVar1 + 0x48))(param_2);
      }
      iVar2 = __alldiv((longlong)(*(int *)(unaff_EDI + 0x78) * 1000) * (longlong)param_3,1000,0);
      local_c = CONCAT22(*(undefined2 *)(unaff_EDI + 100),
                         (((short)(iVar2 / 1000) + (short)(iVar2 >> 0x1f)) -
                         (short)((longlong)iVar2 * 0x10624dd3 >> 0x3f)) +
                         *(short *)(unaff_EDI + 0x60));
      (**(code **)(*piVar1 + 200))(local_c);
    }
    else if (*(char *)((int)piVar1 + 0x4f) != '\0') {
      (**(code **)(*piVar1 + 0x104))();
    }
    local_8 = local_8 + 1;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 6);
  return;
}

