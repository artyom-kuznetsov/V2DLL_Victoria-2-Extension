// FUN_009c48d0 @ 009c48d0 body=[[009c48d0, 009c4a00]]


void FUN_009c48d0(int *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *in_ECX;
  code *pcVar6;
  int iVar7;
  
  if (param_1 != (int *)0x0) {
    iVar1 = in_ECX[0x25];
    iVar2 = *(int *)(iVar1 + 0xe4);
    bVar3 = true;
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0xdc) == iVar1)) {
      bVar3 = false;
    }
    iVar7 = *(int *)(iVar1 + 0xd4);
    FUN_009963d0(iVar1);
    in_ECX[0x25] = (int)param_1;
    if (in_ECX[0x26] != 0) {
      if (bVar3) {
        pcVar6 = *(code **)(*param_1 + 0x7c);
      }
      else {
        pcVar6 = *(code **)(*param_1 + 0x78);
        iVar7 = iVar2;
      }
      (*pcVar6)(iVar7);
    }
    FUN_0099e180(&PTR_FUN_00e40cd8,in_ECX,iVar2);
    iVar1 = *(int *)in_ECX[0x25];
    uVar4 = (**(code **)(*in_ECX + 0xb0))();
    (**(code **)(iVar1 + 0x5c))(uVar4);
    iVar1 = *(int *)in_ECX[0x25];
    uVar4 = (**(code **)(*in_ECX + 0x4c))();
    (**(code **)(iVar1 + 0x60))(uVar4);
    (**(code **)(*(int *)in_ECX[0x25] + 0x9c))(in_ECX[0x31]);
    iVar1 = *in_ECX;
    puVar5 = (undefined4 *)(**(code **)(iVar1 + 0x3c))(&param_1);
    (**(code **)(iVar1 + 200))(*puVar5);
  }
  return;
}

