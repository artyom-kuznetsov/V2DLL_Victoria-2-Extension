// FUN_00ab4e08 @ 00ab4e08 body=[[00ab4e08, 00ab4e38]]


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */

void FUN_00ab4e08(void *param_1)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (p_Var1->_curexcspec != (void *)0x0) {
    _inconsistency();
  }
  FUN_00ab7a31();
  terminate();
  p_Var1 = __getptd();
  p_Var1->_curexcspec = param_1;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

