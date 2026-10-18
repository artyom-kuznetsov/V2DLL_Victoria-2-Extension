// FUN_00612f50 @ 00612f50 body=[[00612f50, 00612fed]]


void FUN_00612f50(int param_1,int param_2)

{
  undefined4 *puVar1;
  int in_EAX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *unaff_EDI;
  
  while (param_2 < in_EAX) {
    iVar2 = (in_EAX + -1) / 2;
    puVar3 = (undefined4 *)(iVar2 * 0x20 + param_1);
    if (((int)puVar3[3] < (int)unaff_EDI[3]) ||
       (((int)puVar3[3] <= (int)unaff_EDI[3] && ((uint)puVar3[2] <= (uint)unaff_EDI[2])))) break;
    puVar1 = (undefined4 *)(in_EAX * 0x20 + param_1);
    *puVar1 = *puVar3;
    puVar1[2] = puVar3[2];
    puVar1[3] = puVar3[3];
    puVar1[4] = puVar3[4];
    puVar1[5] = puVar3[5];
    puVar1[6] = puVar3[6];
    puVar1[7] = puVar3[7];
    in_EAX = iVar2;
  }
  *(undefined4 *)(in_EAX * 0x20 + param_1) = *unaff_EDI;
  param_1 = in_EAX * 0x20 + param_1;
  *(undefined4 *)(param_1 + 8) = unaff_EDI[2];
  *(undefined4 *)(param_1 + 0xc) = unaff_EDI[3];
  *(undefined4 *)(param_1 + 0x10) = unaff_EDI[4];
  *(undefined4 *)(param_1 + 0x14) = unaff_EDI[5];
  *(undefined4 *)(param_1 + 0x18) = unaff_EDI[6];
  *(undefined4 *)(param_1 + 0x1c) = unaff_EDI[7];
  return;
}

