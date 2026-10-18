// FUN_00612ec0 @ 00612ec0 body=[[00612ec0, 00612ed8] [00612ee0, 00612f4e]]


void FUN_00612ec0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  undefined4 *unaff_EDI;
  
  while (param_2 < in_EAX) {
    iVar3 = (in_EAX + -1) / 2;
    iVar2 = *(int *)(param_1 + 0xc + iVar3 * 0x18);
    puVar1 = (undefined4 *)(param_1 + iVar3 * 0x18);
    if ((iVar2 < (int)unaff_EDI[3]) ||
       ((iVar2 <= (int)unaff_EDI[3] && ((uint)puVar1[2] <= (uint)unaff_EDI[2])))) break;
    *(undefined4 *)(param_1 + in_EAX * 0x18) = *puVar1;
    iVar2 = param_1 + in_EAX * 0x18;
    *(undefined4 *)(iVar2 + 8) = puVar1[2];
    *(undefined4 *)(iVar2 + 0xc) = puVar1[3];
    *(undefined4 *)(iVar2 + 0x10) = puVar1[4];
    *(undefined4 *)(iVar2 + 0x14) = puVar1[5];
    in_EAX = iVar3;
  }
  puVar1 = (undefined4 *)(param_1 + in_EAX * 0x18);
  *puVar1 = *unaff_EDI;
  puVar1[2] = unaff_EDI[2];
  puVar1[3] = unaff_EDI[3];
  puVar1[4] = unaff_EDI[4];
  puVar1[5] = unaff_EDI[5];
  return;
}

