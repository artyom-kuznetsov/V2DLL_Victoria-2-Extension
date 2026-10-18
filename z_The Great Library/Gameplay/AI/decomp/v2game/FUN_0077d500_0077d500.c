// FUN_0077d500 @ 0077d500 body=[[0077d500, 0077d5a2]]


void FUN_0077d500(char param_1,char param_2,int param_3)

{
  int iVar1;
  undefined2 uVar2;
  int *piVar3;
  int unaff_EDI;
  
  if (param_2 == '\0') {
    _param_2 = (short)*(undefined4 *)(unaff_EDI + 0x60);
    piVar3 = *(int **)(unaff_EDI + 0x44);
    uVar2 = (undefined2)*(undefined4 *)(unaff_EDI + 100);
  }
  else {
    _param_2 = (short)*(undefined4 *)(unaff_EDI + 0x58);
    piVar3 = *(int **)(unaff_EDI + 0x48);
    uVar2 = (undefined2)*(undefined4 *)(unaff_EDI + 0x5c);
  }
  if (param_1 != '\0') {
    if (*(char *)((int)piVar3 + 0x4f) == '\0') {
      (**(code **)(*piVar3 + 0x108))();
    }
    iVar1 = __alldiv((longlong)(*(int *)(unaff_EDI + 0x54) * 1000) * (longlong)param_3,1000,0);
    _param_2 = CONCAT22(uVar2,(((short)(iVar1 / 1000) + (short)(iVar1 >> 0x1f)) -
                              (short)((longlong)iVar1 * 0x10624dd3 >> 0x3f)) + _param_2);
    (**(code **)(*piVar3 + 200))(_param_2);
    return;
  }
  if (*(char *)((int)piVar3 + 0x4f) != '\0') {
    (**(code **)(*piVar3 + 0x104))();
  }
  return;
}

