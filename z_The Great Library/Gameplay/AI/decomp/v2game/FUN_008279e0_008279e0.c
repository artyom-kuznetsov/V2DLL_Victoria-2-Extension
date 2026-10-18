// FUN_008279e0 @ 008279e0 body=[[008279e0, 00827a59]]


void FUN_008279e0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  int local_c;
  int local_8;
  
  cVar1 = (**(code **)(*param_1 + 0xf0))();
  piVar3 = in_ECX;
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(*param_1 + 0xf4))();
    piVar3 = *(int **)(iVar2 + 0x68);
  }
  in_ECX[0x1a] = (int)piVar3;
  in_ECX[0x10] = (int)param_1;
  DAT_0131ca68 = FUN_009c12d0();
  DAT_01258a9c = DAT_01258a9c + 1;
  local_c = DAT_01258a90 + 0x1268;
  local_8 = DAT_01258a9c;
  (**(code **)(*in_ECX + 0x18))(&local_c);
  return;
}

