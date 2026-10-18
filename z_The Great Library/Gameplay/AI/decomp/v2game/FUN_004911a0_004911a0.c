// FUN_004911a0 @ 004911a0 body=[[004911a0, 00491272]]


void FUN_004911a0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *in_EAX;
  int *in_ECX;
  int iVar4;
  int iVar5;
  int iVar6;
  
  in_ECX[0xe] = *param_1;
  in_ECX[0xf] = *in_EAX;
  iVar2 = (*in_EAX + -43800000) / 0x18;
  iVar3 = (*param_1 + -43800000) / 0x18;
  iVar6 = (int)((double)iVar2 / 365.0);
  iVar4 = (int)((double)iVar3 / 365.0);
  pcVar1 = *(code **)(*in_ECX + 0x38);
  iVar5 = DAT_012588e8 + 0xb0c;
  in_ECX[0x10] = ((((int)((float)iVar6 * -365.0) - (int)((float)iVar4 * -365.0)) +
                  (iVar6 - iVar4) * 0x16d) - iVar3) + iVar2;
  (*pcVar1)(iVar5,1);
  return;
}

