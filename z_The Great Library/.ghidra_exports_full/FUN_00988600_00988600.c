// FUN_00988600 @ 00988600 body=[[00988600, 009886eb] [009886ef, 00988735] [00988739, 009887d4] [009887db, 00988829] [0098882d, 00988841]]


undefined1 * FUN_00988600(undefined1 *param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  undefined4 ****ppppuVar5;
  undefined4 uVar6;
  short *in_EDX;
  undefined4 ****ppppuVar7;
  undefined4 *puVar8;
  undefined4 local_f4;
  uint local_e0;
  int local_d8;
  undefined **local_d4 [4];
  undefined4 *local_c4;
  undefined4 *local_c0;
  undefined4 *local_b4;
  undefined4 *local_b0;
  undefined4 *local_a4;
  undefined4 *local_a0;
  uint *local_9c;
  undefined4 local_98;
  uint local_94;
  undefined **local_88 [19];
  undefined ***local_3c;
  undefined ***local_38;
  undefined4 ***local_34 [4];
  int local_24;
  uint local_20;
  _Lockit local_18 [8];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b528dc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_8 = 0;
  local_34[0] = (undefined4 ***)((uint)local_34[0] & 0xffff0000);
  local_20 = 7;
  local_24 = 0;
  psVar4 = in_EDX;
  do {
    sVar1 = *psVar4;
    psVar4 = psVar4 + 1;
  } while (sVar1 != 0);
  FUN_0098a390(in_EDX,(int)psVar4 - (int)(in_EDX + 1) >> 1);
  local_8._0_1_ = 1;
  FUN_00987ea0(&local_d8,2,1);
  local_8._0_1_ = 2;
  ppppuVar5 = (undefined4 ****)local_34[0];
  ppppuVar7 = (undefined4 ****)local_34[0];
  if (7 < local_20) goto LAB_0098869e;
  ppppuVar7 = local_34;
  while( true ) {
    ppppuVar5 = (undefined4 ****)local_34[0];
    if (local_20 < 8) {
      ppppuVar5 = local_34;
    }
LAB_0098869e:
    if (ppppuVar7 == (undefined4 ****)((int)ppppuVar5 + local_24 * 2)) break;
    FUN_0098a880(&local_d8,*(undefined1 *)ppppuVar7);
    ppppuVar7 = (undefined4 ****)((int)ppppuVar7 + 2);
  }
  uVar6 = FUN_00988010();
  local_8._0_1_ = 3;
  FUN_00447470(uVar6);
  if (0xf < local_e0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_f4);
  }
  local_3c = local_88;
  *(undefined ***)((int)local_d4 + *(int *)(local_d8 + 4) + -4) = &PTR_FUN_00e37850;
  local_38 = local_d4;
  local_d4[0] = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  if ((local_94 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*local_c4);
  }
  *local_c4 = 0;
  *local_b4 = 0;
  *local_a4 = 0;
  *local_c0 = 0;
  *local_b0 = 0;
  *local_a0 = 0;
  local_94 = local_94 & 0xfffffffe;
  local_98 = 0;
  local_d4[0] = std::basic_streambuf<char,std::char_traits<char>_>::vftable;
  local_8 = CONCAT31(local_8._1_3_,5);
  if (local_9c == (uint *)0x0) {
    local_8._0_1_ = 4;
    FUN_00aada22();
    local_8 = CONCAT31(local_8._1_3_,1);
    *(undefined ***)((int)local_d4 + *(int *)(local_d8 + 4) + -4) =
         std::basic_ostream<char,std::char_traits<char>_>::vftable;
    local_88[0] = std::ios_base::vftable;
    FUN_00aad52d(local_88);
    if (local_20 < 8) {
      ExceptionList = local_10;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  uVar2 = *local_9c;
  if (uVar2 != 0) {
    std::_Lockit::_Lockit(local_18,0);
    iVar3 = *(int *)(uVar2 + 4);
    if ((iVar3 != 0) && (iVar3 != -1)) {
      *(int *)(uVar2 + 4) = iVar3 + -1;
    }
    iVar3 = *(int *)(uVar2 + 4);
    FUN_00aad9f1();
    puVar8 = (undefined4 *)(~-(uint)(iVar3 != 0) & uVar2);
    if (puVar8 != (undefined4 *)0x0) {
      (**(code **)*puVar8)(1);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_9c);
}

