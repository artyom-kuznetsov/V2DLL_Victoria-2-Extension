// FUN_00539670 @ 00539670 body=[[00539670, 00539759]]


void FUN_00539670(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *unaff_EDI;
  longlong lVar4;
  uint local_c;
  int local_8;
  
  iVar2 = *(int *)(DAT_012588e8 + 0xbcc) + 0x280;
  FUN_0047e3e0(param_1 + 0xec4,iVar2);
  lVar4 = __allmul(*param_2,param_2[1],local_c,local_8);
  *(longlong *)unaff_EDI = lVar4 >> 0xf;
  FUN_0047e3e0(param_1 + 0xf1c,iVar2);
  lVar4 = __allmul(param_2[2],param_2[3],local_c,local_8);
  uVar3 = (uint)(lVar4 >> 0xf);
  uVar1 = *unaff_EDI;
  *unaff_EDI = *unaff_EDI + uVar3;
  unaff_EDI[1] = unaff_EDI[1] + (int)((ulonglong)(lVar4 >> 0xf) >> 0x20) + (uint)CARRY4(uVar1,uVar3)
  ;
  FUN_0047e3e0(param_1 + 0xf74,iVar2);
  uVar1 = *unaff_EDI;
  *unaff_EDI = *unaff_EDI + local_c;
  unaff_EDI[1] = unaff_EDI[1] + local_8 + (uint)CARRY4(uVar1,local_c);
  FUN_0047e3e0(param_1 + 0xfcc,iVar2);
  lVar4 = __allmul(param_2[4],param_2[5],local_c,local_8);
  uVar3 = (uint)(lVar4 >> 0xf);
  uVar1 = *unaff_EDI;
  *unaff_EDI = *unaff_EDI + uVar3;
  unaff_EDI[1] = unaff_EDI[1] + (int)((ulonglong)(lVar4 >> 0xf) >> 0x20) + (uint)CARRY4(uVar1,uVar3)
  ;
  return;
}

