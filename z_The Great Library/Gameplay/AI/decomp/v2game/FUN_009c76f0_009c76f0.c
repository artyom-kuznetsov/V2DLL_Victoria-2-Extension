// FUN_009c76f0 @ 009c76f0 body=[[009c76f0, 009c784e] [009c7852, 009c7866]]


void FUN_009c76f0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  undefined4 uVar4;
  uint uStack_f4;
  undefined **appuStack_74 [19];
  void *pvStack_28;
  undefined1 uStack_20;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uVar3 = DAT_01258ab4;
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b546a6;
  pvStack_14 = ExceptionList;
  puVar1 = in_ECX;
  if (0xf < (uint)in_ECX[5]) {
    puVar1 = (undefined4 *)*in_ECX;
  }
  ExceptionList = &pvStack_14;
  iVar2 = (**(code **)(PTR_PTR_00f0f77c + 8))(puVar1);
  if (iVar2 == -1) {
    if (DAT_00f0f784 == '\x01') {
      FUN_00a5c690(&PTR_PTR_00f0f77c,in_ECX,uVar3);
      ExceptionList = pvStack_18;
      return;
    }
    FUN_009c7cd0(&PTR_PTR_00f0f77c,&DAT_00f0f780,uVar3);
    ExceptionList = pvStack_18;
    return;
  }
  FUN_00409350("sound.cpp",9);
  puStack_10 = (undefined1 *)0x0;
  uVar3 = FUN_004015b0(&stack0xffffff08,0xf0,0x1000);
  uVar4 = 0;
  puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,1);
  FUN_00987d50(uVar3,"Duplicate sound: ",0x11,0);
  if (0xf < (uint)in_ECX[5]) {
    in_ECX = (undefined4 *)*in_ECX;
  }
  uVar3 = FUN_00418e30(uVar3,in_ECX);
  FUN_00401280(uVar3);
  uStack_20 = 0;
  FUN_00987ac0(appuStack_74);
  appuStack_74[0] = std::ios_base::vftable;
  FUN_00aad52d(appuStack_74);
  if (0xf < uStack_f4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uVar4);
  }
  ExceptionList = pvStack_28;
  return;
}

