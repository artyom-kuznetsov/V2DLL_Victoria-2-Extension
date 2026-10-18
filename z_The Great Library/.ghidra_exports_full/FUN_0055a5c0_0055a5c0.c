// FUN_0055a5c0 @ 0055a5c0 body=[[0055a5c0, 0055a636]]


void FUN_0055a5c0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int in_EAX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *unaff_EDI;
  
  while (param_2 < in_EAX) {
    iVar2 = (in_EAX + -1) / 2;
    puVar3 = (undefined4 *)(iVar2 * 0x10 + param_1);
    if (((int)puVar3[3] < (int)unaff_EDI[3]) ||
       (((int)puVar3[3] <= (int)unaff_EDI[3] && ((uint)puVar3[2] <= (uint)unaff_EDI[2])))) break;
    puVar1 = (undefined4 *)(param_1 + in_EAX * 0x10);
    *puVar1 = *puVar3;
    puVar1[1] = puVar3[1];
    puVar1[2] = puVar3[2];
    puVar1[3] = puVar3[3];
    in_EAX = iVar2;
  }
  puVar3 = (undefined4 *)(param_1 + in_EAX * 0x10);
  *puVar3 = *unaff_EDI;
  puVar3[1] = unaff_EDI[1];
  puVar3[2] = unaff_EDI[2];
  puVar3[3] = unaff_EDI[3];
  return;
}

