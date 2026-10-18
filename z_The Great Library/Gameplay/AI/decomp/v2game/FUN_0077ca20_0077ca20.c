// FUN_0077ca20 @ 0077ca20 body=[[0077ca20, 0077caa7]]


void FUN_0077ca20(char param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int unaff_ESI;
  
  piVar1 = *(int **)(unaff_ESI + 0x5c);
  if (param_1 == '\0') {
    if (*(char *)((int)piVar1 + 0x4f) == '\0') goto LAB_0077ca4c;
    pcVar3 = *(code **)(*piVar1 + 0x104);
  }
  else {
    if (*(char *)((int)piVar1 + 0x4f) != '\0') goto LAB_0077ca4c;
    pcVar3 = *(code **)(*piVar1 + 0x108);
  }
  (*pcVar3)();
LAB_0077ca4c:
  piVar1 = *(int **)(unaff_ESI + 0x5c);
  if (*(char *)((int)piVar1 + 0x4f) != '\0') {
    iVar2 = __alldiv((longlong)(*(int *)(unaff_ESI + 0x78) * 1000) * (longlong)param_2,1000,0);
    _param_1 = CONCAT22(*(undefined2 *)(unaff_ESI + 0x74),
                        (((short)(iVar2 / 1000) + (short)(iVar2 >> 0x1f)) -
                        (short)((longlong)iVar2 * 0x10624dd3 >> 0x3f)) +
                        *(short *)(unaff_ESI + 0x70));
    (**(code **)(*piVar1 + 200))(_param_1);
  }
  return;
}

