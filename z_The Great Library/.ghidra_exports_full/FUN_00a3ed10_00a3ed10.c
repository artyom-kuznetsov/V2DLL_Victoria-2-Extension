// FUN_00a3ed10 @ 00a3ed10 body=[[00a3ed10, 00a3f119]]


void FUN_00a3ed10(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  
  if (in_ECX + 6 < 40000) {
    uVar2 = *param_1;
    uVar3 = param_2[1];
    *(undefined4 *)(&DAT_0132cee0 + in_ECX * 0x14) = param_7;
    *(ulonglong *)(&DAT_0132ced0 + in_ECX * 0x14) = CONCAT44(uVar3,uVar2) ^ 0x8000000000000000;
    *(undefined4 *)(&DAT_0132cedc + in_ECX * 0x14) = param_4;
    *(undefined4 *)(&DAT_0132ced8 + in_ECX * 0x14) = param_3;
    *(ulonglong *)(&DAT_0132cee4 + in_ECX * 0x14) = CONCAT44(*param_2,*param_1) ^ 0x8000000000000000
    ;
    *(undefined4 *)(&DAT_0132cef4 + in_ECX * 0x14) = param_6;
    *(undefined4 *)(&DAT_0132cef0 + in_ECX * 0x14) = param_4;
    iVar1 = in_ECX * 0x14;
    *(undefined4 *)(&DAT_0132ceec + iVar1) = param_3;
    uVar2 = param_1[1];
    uVar3 = *param_2;
    *(undefined4 *)(&DAT_0132cf08 + in_ECX * 0x14) = param_6;
    *(ulonglong *)(&DAT_0132cef8 + in_ECX * 0x14) = CONCAT44(uVar3,uVar2) ^ 0x8000000000000000;
    *(undefined4 *)(&DAT_0132cf00 + in_ECX * 0x14) = param_3;
    *(undefined4 *)(&DAT_0132cf04 + in_ECX * 0x14) = param_5;
    *(ulonglong *)(&DAT_0132cf0c + in_ECX * 0x14) =
         CONCAT44(*param_2,param_1[1]) ^ 0x8000000000000000;
    *(undefined4 *)(&DAT_0132cf14 + in_ECX * 0x14) = param_3;
    *(undefined4 *)(&DAT_0132cf1c + in_ECX * 0x14) = param_6;
    *(undefined4 *)(&DAT_0132cf18 + in_ECX * 0x14) = param_5;
    *(ulonglong *)(&DAT_0132cf20 + in_ECX * 0x14) =
         CONCAT44(param_2[1],param_1[1]) ^ 0x8000000000000000;
    *(undefined4 *)(&DAT_0132cf28 + in_ECX * 0x14) = param_3;
    *(undefined4 *)(&DAT_0132cf2c + in_ECX * 0x14) = param_5;
    *(undefined4 *)(&DAT_0132cf30 + in_ECX * 0x14) = param_7;
    uVar2 = *param_1;
    uVar3 = param_2[1];
    *(undefined4 *)(&DAT_0132cf40 + in_ECX * 0x14) = param_4;
    *(undefined4 *)(&DAT_0132cf44 + in_ECX * 0x14) = param_7;
    *(ulonglong *)(&DAT_0132cf34 + in_ECX * 0x14) = CONCAT44(uVar3,uVar2) ^ 0x8000000000000000;
    *(undefined4 *)(&DAT_0132cf3c + in_ECX * 0x14) = param_3;
    *(float *)(&DAT_0132ced0 + in_ECX * 0x14) = *(float *)(&DAT_0132ced0 + in_ECX * 0x14) - 0.5;
    *(float *)(&DAT_0132ced4 + in_ECX * 0x14) = *(float *)(&DAT_0132ced4 + in_ECX * 0x14) - 0.5;
    *(float *)(&DAT_0132ced8 + in_ECX * 0x14) = *(float *)(&DAT_0132ced8 + in_ECX * 0x14) + 0.0;
    *(float *)(&DAT_0132cee4 + iVar1) = *(float *)(&DAT_0132cee4 + iVar1) - 0.5;
    *(float *)(&DAT_0132cee8 + iVar1) = *(float *)(&DAT_0132cee8 + iVar1) - 0.5;
    *(float *)(&DAT_0132ceec + iVar1) = *(float *)(&DAT_0132ceec + iVar1) + 0.0;
    *(float *)(&DAT_0132cef8 + in_ECX * 0x14) = *(float *)(&DAT_0132cef8 + in_ECX * 0x14) - 0.5;
    *(float *)(&DAT_0132cefc + in_ECX * 0x14) = *(float *)(&DAT_0132cefc + in_ECX * 0x14) - 0.5;
    *(float *)(&DAT_0132cf00 + in_ECX * 0x14) = *(float *)(&DAT_0132cf00 + in_ECX * 0x14) + 0.0;
    *(float *)(&DAT_0132cf0c + in_ECX * 0x14) = *(float *)(&DAT_0132cf0c + in_ECX * 0x14) - 0.5;
    *(float *)(&DAT_0132cf10 + in_ECX * 0x14) = *(float *)(&DAT_0132cf10 + in_ECX * 0x14) - 0.5;
    *(float *)(&DAT_0132cf14 + in_ECX * 0x14) = *(float *)(&DAT_0132cf14 + in_ECX * 0x14) + 0.0;
    *(float *)(&DAT_0132cf20 + in_ECX * 0x14) = *(float *)(&DAT_0132cf20 + in_ECX * 0x14) - 0.5;
    *(float *)(&DAT_0132cf24 + in_ECX * 0x14) = *(float *)(&DAT_0132cf24 + in_ECX * 0x14) - 0.5;
    *(float *)(&DAT_0132cf28 + in_ECX * 0x14) = *(float *)(&DAT_0132cf28 + in_ECX * 0x14) + 0.0;
    *(float *)(&DAT_0132cf34 + in_ECX * 0x14) = *(float *)(&DAT_0132cf34 + in_ECX * 0x14) - 0.5;
    *(float *)(&DAT_0132cf38 + in_ECX * 0x14) = *(float *)(&DAT_0132cf38 + in_ECX * 0x14) - 0.5;
    *(float *)(&DAT_0132cf3c + in_ECX * 0x14) = *(float *)(&DAT_0132cf3c + in_ECX * 0x14) + 0.0;
  }
  return;
}

