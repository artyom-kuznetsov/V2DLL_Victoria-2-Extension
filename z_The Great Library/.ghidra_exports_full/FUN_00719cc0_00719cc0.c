// FUN_00719cc0 @ 00719cc0 body=[[00719cc0, 00719d2a]]


void FUN_00719cc0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int in_EAX;
  int iVar2;
  undefined4 *puVar3;
  int unaff_EDI;
  
  while (param_1 < in_EAX) {
    iVar2 = (in_EAX + -1) / 2;
    puVar3 = (undefined4 *)(iVar2 * 0x10 + unaff_EDI);
    if (((int)puVar3[3] < (int)param_2[3]) ||
       (((int)puVar3[3] <= (int)param_2[3] && ((uint)puVar3[2] <= (uint)param_2[2])))) break;
    puVar1 = (undefined4 *)(unaff_EDI + in_EAX * 0x10);
    *puVar1 = *puVar3;
    puVar1[2] = puVar3[2];
    puVar1[3] = puVar3[3];
    in_EAX = iVar2;
  }
  puVar3 = (undefined4 *)(unaff_EDI + in_EAX * 0x10);
  *puVar3 = *param_2;
  puVar3[2] = param_2[2];
  puVar3[3] = param_2[3];
  return;
}

