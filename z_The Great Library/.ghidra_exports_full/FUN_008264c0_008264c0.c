// FUN_008264c0 @ 008264c0 body=[[008264c0, 00826527]]


void FUN_008264c0(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined4 *in_ECX;
  
  puVar1 = (undefined4 *)*in_ECX;
  bVar4 = true;
joined_r0x008264ce:
  do {
    if (puVar1 == (undefined4 *)0x0) {
      return;
    }
    piVar2 = (int *)*puVar1;
    puVar1 = (undefined4 *)puVar1[2];
    if ((bVar4) && ((char)param_1[0xf] != '\0')) {
      cVar5 = (**(code **)(*piVar2 + 0x38))();
      iVar3 = *piVar2;
      if (cVar5 == '\0') {
        uVar6 = (**(code **)(iVar3 + 0x30))();
        pcVar7 = *(code **)(*param_1 + 0x1b8);
      }
      else {
        uVar6 = (**(code **)(iVar3 + 0x2c))();
        pcVar7 = *(code **)(*param_1 + 0x1a8);
      }
      cVar5 = (*pcVar7)(uVar6);
      if (cVar5 != '\0') {
        bVar4 = true;
        goto joined_r0x008264ce;
      }
    }
    bVar4 = false;
  } while( true );
}

