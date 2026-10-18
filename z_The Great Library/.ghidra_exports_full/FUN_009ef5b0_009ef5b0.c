// FUN_009ef5b0 @ 009ef5b0 body=[[009ef5b0, 009ef6e8]]


void FUN_009ef5b0(int *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *in_ECX;
  code *pcVar6;
  float10 fVar7;
  int iVar8;
  
  if (param_1 != (int *)0x0) {
    iVar1 = in_ECX[0x28];
    iVar2 = *(int *)(iVar1 + 0xe4);
    bVar3 = true;
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0xdc) == iVar1)) {
      bVar3 = false;
    }
    iVar8 = *(int *)(iVar1 + 0xd4);
    FUN_009963d0(iVar1);
    in_ECX[0x28] = (int)param_1;
    if (in_ECX[0x48] != 0) {
      if (bVar3) {
        pcVar6 = *(code **)(*param_1 + 0x7c);
      }
      else {
        pcVar6 = *(code **)(*param_1 + 0x78);
        iVar8 = iVar2;
      }
      (*pcVar6)(iVar8);
    }
    FUN_0099e180(&PTR_FUN_00e40cd8,in_ECX,iVar2);
    iVar1 = *(int *)in_ECX[0x28];
    uVar4 = (**(code **)(*in_ECX + 0xb0))();
    (**(code **)(iVar1 + 0x5c))(uVar4);
    iVar1 = *(int *)in_ECX[0x28];
    uVar4 = (**(code **)(*in_ECX + 0x4c))();
    (**(code **)(iVar1 + 0x60))(uVar4);
    iVar1 = *(int *)in_ECX[0x28];
    fVar7 = (float10)(**(code **)(*in_ECX + 0x100))();
    (**(code **)(iVar1 + 0x9c))((float)fVar7);
    iVar1 = *in_ECX;
    puVar5 = (undefined4 *)(**(code **)(iVar1 + 0x3c))(&param_1);
    (**(code **)(iVar1 + 200))(*puVar5);
  }
  return;
}

