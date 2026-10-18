// FUN_004cb110 @ 004cb110 body=[[004cb110, 004cb188]]


void FUN_004cb110(void)

{
  int unaff_ESI;
  undefined **ppuVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 local_74 [112];
  
  uVar3 = *(undefined4 *)(unaff_ESI + 0x6c);
  *(undefined4 *)(unaff_ESI + 0x70) = 0;
  uVar4 = 0;
  uVar6 = 0;
  uVar2 = 0x18d;
  ppuVar1 = CColonizationData::vftable;
  uVar5 = DAT_01259abc;
  _eh_vector_constructor_iterator_(local_74,0x1c,4,FUN_004ca290,FUN_004010c0);
  FUN_004ca2e0(ppuVar1,uVar2,uVar3,uVar4,uVar5,uVar6);
  _eh_vector_destructor_iterator_(local_74,0x1c,4,FUN_004010c0);
  FUN_004cbd50();
  return;
}

