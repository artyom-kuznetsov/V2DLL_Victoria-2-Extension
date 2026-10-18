// FUN_009d5b00 @ 009d5b00 body=[[009d5b00, 009d5b62] [009d5b67, 009d5b74]]


void FUN_009d5b00(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_ECX;
  undefined4 *puVar4;
  _Lockit local_c [8];
  
  puVar1 = (uint *)in_ECX[0xe];
  *in_ECX = &PTR_FUN_00e3b478;
  if (puVar1 == (uint *)0x0) {
    FUN_00aada22();
    return;
  }
  uVar2 = *puVar1;
  if (uVar2 != 0) {
    std::_Lockit::_Lockit(local_c,0);
    iVar3 = *(int *)(uVar2 + 4);
    if ((iVar3 != 0) && (iVar3 != -1)) {
      *(int *)(uVar2 + 4) = iVar3 + -1;
    }
    iVar3 = *(int *)(uVar2 + 4);
    FUN_00aad9f1();
    puVar4 = (undefined4 *)(~-(uint)(iVar3 != 0) & uVar2);
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)*puVar4)(1);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(puVar1);
}

