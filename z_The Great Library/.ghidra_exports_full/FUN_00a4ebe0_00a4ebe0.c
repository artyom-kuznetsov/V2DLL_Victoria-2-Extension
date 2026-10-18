// FUN_00a4ebe0 @ 00a4ebe0 body=[[00a4ebe0, 00a4ee1d]]


float10 FUN_00a4ebe0(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  float *pfVar6;
  int *in_ECX;
  short sVar7;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  short sVar8;
  undefined4 unaff_EDI;
  float10 fVar9;
  double dVar10;
  int iStack_50;
  undefined1 *puStack_4c;
  int iStack_48;
  float *pfStack_44;
  undefined2 uStack_40;
  short sStack_3e;
  short sStack_3c;
  short sStack_3a;
  short sStack_38;
  undefined2 uStack_36;
  float fStack_34;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  float local_20;
  float fStack_1c;
  
  sStack_38 = (short)unaff_EBX;
  uStack_36 = (undefined2)((uint)unaff_EBX >> 0x10);
  sStack_3c = (short)unaff_ESI;
  sStack_3a = (short)((uint)unaff_ESI >> 0x10);
  uStack_40 = (undefined2)unaff_EDI;
  sStack_3e = (short)((uint)unaff_EDI >> 0x10);
  pfStack_44 = &local_20;
  iStack_48 = 0xa4ebff;
  iVar5 = (**(code **)(*in_ECX + 0xd4))();
  fVar1 = *(float *)(iVar5 + 4);
  iStack_48 = (int)&uStack_30 + 4;
  puStack_4c = (undefined1 *)0xa4ec18;
  pfVar6 = (float *)(**(code **)(*in_ECX + 0xd4))();
  sStack_38 = (short)(int)*pfVar6;
  fStack_1c = param_1 - (float)(int)sStack_38;
  puStack_4c = auStack_28;
  uStack_30 = (double)param_2;
  iStack_50 = 0xa4ec63;
  uStack_36 = (short)(int)fVar1;
  iVar5 = (**(code **)(*in_ECX + 0xd8))();
  sStack_38 = (short)in_ECX[0x54];
  uStack_36 = (undefined2)((uint)in_ECX[0x54] >> 0x10);
  fStack_1c = (float)((double)CONCAT44((undefined4)uStack_30,fStack_34) -
                     (double)((int)*(short *)(iVar5 + 2) + (int)sStack_3a));
  iStack_50 = 0xa4ec9f;
  fVar9 = (float10)FUN_00b35410();
  fStack_34 = (float)fVar9;
  iStack_50 = 0xa4ecb4;
  uStack_30._4_4_ = fStack_34;
  fVar9 = (float10)FUN_00b352e0();
  fStack_34 = (float)fVar9;
  fVar1 = uStack_30._4_4_ * fStack_1c;
  fVar2 = fStack_34 * local_20;
  sVar8 = (short)(int)(uStack_30._4_4_ * local_20 - fStack_34 * fStack_1c) + sStack_3c;
  iStack_50 = (int)&uStack_30 + 4;
  iVar5 = (**(code **)(*in_ECX + 0xd8))();
  sVar7 = (short)(int)(fVar1 + fVar2) + *(short *)(iVar5 + 2) + sStack_3e;
  sStack_3c = sVar8;
  sStack_3a = sVar7;
  cVar3 = (**(code **)(*(int *)in_ECX[0x55] + 0x40))(&sStack_3c,&uStack_40,DAT_00f092fc);
  if (cVar3 != '\0') {
    dVar10 = (double)(int)sVar7;
    sStack_3c = SUB82(dVar10,0);
    sStack_3a = (short)((ulonglong)dVar10 >> 0x10);
    sStack_38 = (short)((ulonglong)dVar10 >> 0x20);
    uStack_36 = (undefined2)((ulonglong)dVar10 >> 0x30);
    iVar5 = (**(code **)(*in_ECX + 0xd4))(&pfStack_44);
    fVar1 = *(float *)(iVar5 + 4);
    dVar10 = (double)CONCAT26(sStack_3a,CONCAT24(sStack_3c,CONCAT22(sStack_3e,uStack_40)));
    pfVar6 = (float *)(**(code **)(*in_ECX + 0xd4))(&fStack_34);
    iStack_50 = CONCAT22((short)(int)(dVar10 - (double)fVar1),
                         (short)(int)((float)(int)sVar8 - *pfVar6));
    iVar5 = *(int *)in_ECX[0x55];
    uVar4 = (**(code **)(*in_ECX + 0x68))();
    cVar3 = (**(code **)(iVar5 + 0x48))(&iStack_50,uVar4);
    if (cVar3 == '\0') {
      return (float10)1;
    }
  }
  return (float10)0;
}

