// FindHandler @ 00ab5373 body=[[00ab5373, 00ab56e7]]


/* Library Function - Single Match
    void __cdecl FindHandler(struct EHExceptionRecord *,struct EHRegistrationNode *,struct _CONTEXT
   *,void *,struct _s_FuncInfo const *,unsigned char,int,struct EHRegistrationNode *)
   
   Library: Visual Studio 2010 Release */

void __cdecl
FindHandler(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
           _s_FuncInfo *param_5,uchar param_6,int param_7,EHRegistrationNode *param_8)

{
  uint uVar1;
  int *piVar2;
  HandlerType **ppHVar3;
  char cVar4;
  bool bVar5;
  _ptiddata p_Var6;
  int iVar7;
  _s_TryBlockMapEntry *p_Var8;
  EHRegistrationNode *unaff_EBX;
  int iVar9;
  HandlerType *pHVar10;
  _s_FuncInfo *p_Var11;
  int unaff_ESI;
  _s_FuncInfo *p_Var12;
  _s_TryBlockMapEntry *unaff_EDI;
  HandlerType **ppHVar13;
  EHRegistrationNode *pEVar14;
  undefined4 in_stack_ffffffc8;
  uint local_24;
  HandlerType **local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  HandlerType *local_10;
  int local_c;
  char local_5;
  
  p_Var11 = param_5;
  local_5 = '\0';
  if (param_5->maxState < 0x81) {
    local_c = (int)(char)param_2[8];
  }
  else {
    local_c = *(int *)(param_2 + 8);
  }
  if ((local_c < -1) || (param_5->maxState <= local_c)) {
    _inconsistency();
  }
  p_Var12 = (_s_FuncInfo *)param_1;
  if (*(int *)param_1 == -0x1f928c9d) {
    if (((*(int *)(param_1 + 0x10) == 3) &&
        (((iVar7 = *(int *)(param_1 + 0x14), iVar7 == 0x19930520 || (iVar7 == 0x19930521)) ||
         (iVar7 == 0x19930522)))) && (*(int *)(param_1 + 0x1c) == 0)) {
      p_Var6 = __getptd();
      if (p_Var6->_curexception == (void *)0x0) {
        return;
      }
      p_Var6 = __getptd();
      p_Var12 = p_Var6->_curexception;
      param_1 = (EHExceptionRecord *)p_Var12;
      p_Var6 = __getptd();
      param_3 = p_Var6->_curcontext;
      iVar7 = _ValidateRead(p_Var12,1);
      if (iVar7 == 0) {
        _inconsistency();
      }
      if ((((p_Var12->magicNumber_and_bbtFlags == 0xe06d7363) &&
           (p_Var12->pTryBlockMap == (TryBlockMapEntry *)0x3)) &&
          ((uVar1 = p_Var12->nIPMapEntries, uVar1 == 0x19930520 ||
           ((uVar1 == 0x19930521 || (uVar1 == 0x19930522)))))) &&
         (p_Var12->pESTypeList == (ESTypeList *)0x0)) {
        _inconsistency();
      }
      p_Var6 = __getptd();
      if (p_Var6->_curexcspec != (void *)0x0) {
        p_Var6 = __getptd();
        piVar2 = p_Var6->_curexcspec;
        p_Var6 = __getptd();
        iVar7 = 0;
        p_Var6->_curexcspec = (void *)0x0;
        cVar4 = FUN_00ab4d92(param_1);
        p_Var12 = (_s_FuncInfo *)param_1;
        if (cVar4 == '\0') {
          iVar9 = 0;
          if (0 < *piVar2) {
            do {
              bVar5 = type_info::operator==
                                (*(type_info **)(iVar9 + 4 + piVar2[1]),
                                 (type_info *)&std::bad_exception::RTTI_Type_Descriptor);
              if (bVar5) goto LAB_00ab54b8;
              iVar7 = iVar7 + 1;
              iVar9 = iVar9 + 0x10;
            } while (iVar7 < *piVar2);
          }
          goto LAB_00ab54b3;
        }
      }
    }
    p_Var11 = param_5;
    if (((p_Var12->magicNumber_and_bbtFlags == 0xe06d7363) &&
        (p_Var12->pTryBlockMap == (TryBlockMapEntry *)0x3)) &&
       ((uVar1 = p_Var12->nIPMapEntries, uVar1 == 0x19930520 ||
        ((uVar1 == 0x19930521 || (uVar1 == 0x19930522)))))) {
      if ((param_5->nTryBlocks != 0) &&
         (p_Var8 = _GetRangeOfTrysToCheck(param_5,param_7,local_c,&local_14,&local_24),
         local_14 < local_24)) {
        ppHVar13 = &p_Var8->pHandlerArray;
        do {
          local_20 = ppHVar13;
          if ((((_s_TryBlockMapEntry *)(ppHVar13 + -4))->tryLow <= local_c) &&
             (local_c <= (int)ppHVar13[-3])) {
            local_10 = *ppHVar13;
            ppHVar3 = ppHVar13;
            for (local_1c = (int)ppHVar13[-1]; local_20 = ppHVar13, 0 < local_1c;
                local_1c = local_1c + -1) {
              pHVar10 = p_Var12->pESTypeList[1].pTypeArray;
              local_20 = ppHVar3;
              for (local_18 = pHVar10->adjectives; 0 < (int)local_18; local_18 = local_18 - 1) {
                pHVar10 = (HandlerType *)&pHVar10->pType;
                p_Var11 = *(_s_FuncInfo **)pHVar10;
                iVar7 = ___TypeMatch(local_10,p_Var11,p_Var12->pESTypeList);
                if (iVar7 != 0) {
                  local_5 = '\x01';
                  CatchIt((EHExceptionRecord *)p_Var12,(EHRegistrationNode *)param_3,param_4,param_5
                          ,p_Var11,(_s_HandlerType *)param_7,(_s_CatchableType *)param_8,unaff_EDI,
                          unaff_ESI,unaff_EBX,(uchar)SUB41(in_stack_ffffffc8,0));
                  p_Var12 = (_s_FuncInfo *)param_1;
                  goto LAB_00ab55f0;
                }
              }
              local_10 = local_10 + 1;
              ppHVar3 = local_20;
            }
          }
LAB_00ab55f0:
          local_14 = local_14 + 1;
          ppHVar13 = local_20 + 5;
          p_Var11 = param_5;
          local_20 = ppHVar13;
        } while (local_14 < local_24);
      }
      if (param_6 != '\0') {
        ___DestructExceptionObject(p_Var12,1);
      }
      if ((((local_5 != '\0') || ((p_Var11->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930521)) ||
          (p_Var11->pESTypeList == (ESTypeList *)0x0)) ||
         (cVar4 = FUN_00ab4d92(p_Var12), cVar4 != '\0')) goto LAB_00ab56d0;
      __getptd();
      __getptd();
      p_Var6 = __getptd();
      p_Var6->_curexception = p_Var12;
      p_Var6 = __getptd();
      p_Var6->_curcontext = param_3;
      pEVar14 = param_8;
      if (param_8 == (EHRegistrationNode *)0x0) {
        pEVar14 = param_2;
      }
      _UnwindNestedFrames(pEVar14,(EHExceptionRecord *)p_Var12);
      p_Var12 = param_5;
      ___FrameUnwindToState(param_2,param_4,param_5,0xffffffff);
      FUN_00ab4e08(p_Var12->pESTypeList);
      p_Var11 = param_5;
    }
  }
  if (p_Var11->nTryBlocks != 0) {
    if (param_6 != '\0') {
LAB_00ab54b3:
      terminate();
LAB_00ab54b8:
      ___DestructExceptionObject(param_1,1);
      param_1 = (EHExceptionRecord *)s_bad_exception_00dd9500;
      std::exception::exception((exception *)&stack0xffffffc8,(char **)&param_1);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&stack0xffffffc8,&DAT_00e6c174);
    }
    FindHandlerForForeignException
              ((EHExceptionRecord *)p_Var12,param_2,param_3,param_4,p_Var11,local_c,param_7,param_8)
    ;
  }
LAB_00ab56d0:
  p_Var6 = __getptd();
  if (p_Var6->_curexcspec != (void *)0x0) {
    _inconsistency();
  }
  return;
}

