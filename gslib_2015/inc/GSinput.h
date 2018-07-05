/******************************************************************************
* File Name : gsinput.h                          Ver : 1.00  Date : 2016-04-16
*
* Description :
*
*       入力デバイスシステム ヘッダファイル．
*
* Author : Moriharu Ohzu.
*
******************************************************************************/
#ifndef		_GSINPUT_H_
#define		_GSINPUT_H_

#include	"ginput.h"
#include	"GStype.h"

/****** 定数型宣言 ***********************************************************/

#ifdef __cplusplus
extern "C" {
#endif

extern const GSushort GS_XBOX_PAD_UP;
extern const GSushort GS_XBOX_PAD_DOWN;
extern const GSushort GS_XBOX_PAD_LEFT;
extern const GSushort GS_XBOX_PAD_RIGHT;
extern const GSushort GS_XBOX_PAD_START;
extern const GSushort GS_XBOX_PAD_BACK;
extern const GSushort GS_XBOX_PAD_LEFT_THUMB;
extern const GSushort GS_XBOX_PAD_RIGHT_THUMB;
extern const GSushort GS_XBOX_PAD_LEFT_SHOULDER;
extern const GSushort GS_XBOX_PAD_RIGHT_SHOULDER;
extern const GSushort GS_XBOX_PAD_A;
extern const GSushort GS_XBOX_PAD_B;
extern const GSushort GS_XBOX_PAD_X;
extern const GSushort GS_XBOX_PAD_Y;

/****** 関数プロトタイプ宣言 *************************************************/


/*=============================================================================
*
* Purpose : 入力デバイスシステムの初期化．
*
* Return  : 初期化に成功すれば真，失敗すれば偽を返す．
*
*============================================================================*/
BOOL
gsInitInput
(
	HWND			hwnd			/* ウィンドウハンドラ           */
);

/*=============================================================================
*
* Purpose : 入力デバイスシステムの終了処理．
*
* Return  : なし．
*
*============================================================================*/
void
gsFinishInput
(
	void
);

/*=============================================================================
*
* Purpose : ウィンドウがアクティブになった時の処理．
*
* Return  : なし．
*
*============================================================================*/
void
gsActivateInput
(
	BOOL		active				/* アクティブフラグ             */
);

/*=============================================================================
*
* Purpose : 入力デバイスの状態を読み込む．
*
* Return  : なし．
*
*============================================================================*/
void
gsReadInput
(
	void
);

/*=============================================================================
*
* Purpose : キーの入力状態を調べる．
*
* Return  : キーが押されていれば真，押されていなければ偽を返す．
*
*============================================================================*/
BOOL
gsGetKeyState
(
	GKEYCODE		key_code		/* キーコード                   */
);

/*=============================================================================
*
* Purpose : キーが押されたか調べる．
*
* Return  : キーが押されていれば真，押されていなければ偽を返す．
*
*============================================================================*/
BOOL
gsGetKeyTrigger
(
	GKEYCODE		key_code		/* キーコード                   */
);

/*=============================================================================
*
* Purpose : キーが離されたか調べる．
*
* Return  : キーが離されれば真，離されていなければ偽を返す．
*
*============================================================================*/
BOOL
gsGetKeyDetach
(
	GKEYCODE		key_code		/* キーコード                   */
);

/*=============================================================================
*
* Purpose : キーの押されているキーを調べる．
*
* Return  : 押されているキーのキーコードを返す．
*           何も押されていなければ０を返す．
*
*============================================================================*/
GKEYCODE
gsGetKey
(
	void
);

/*=============================================================================
*
* Purpose : 接続されているジョイスティック数を調べる．
*
* Return  : 接続されているジョイスティック数を返す．
*
*============================================================================*/
int
gsGetJoyCount
(
	void
);

/*=============================================================================
*
* Purpose : ジョイスティックの入力状態を調べる．
*
* Return  : 押されていれば真，押されていなければ偽を返す．
*
*============================================================================*/
BOOL
gsGetJoyState
(
	int				joy_no,			/* ジョイスティックナンバ       */
	GJOYSTATE		state			/* 調べたいジョイステックの状態 */
);

/*=============================================================================
*
* Purpose : ジョイスティックが押されたか調べる．
*
* Return  : 押されたら真，押されなければ偽を返す．
*
*============================================================================*/
BOOL
gsGetJoyTrigger
(
	int				joy_no,			/* ジョイスティックナンバ       */
	GJOYSTATE		state			/* 調べたいジョイステックの状態 */
);

/*=============================================================================
*
* Purpose : ジョイスティックが離されたか調べる．
*
* Return  : 離されたら真，離されなければ偽を返す．
*
*============================================================================*/
BOOL
gsGetJoyDetach
(
	int				joy_no,			/* ジョイスティックナンバ       */
	GJOYSTATE		state			/* 調べたいジョイステックの状態 */
);

/*=============================================================================
*
* Purpose : ジョイスティックの軸の状態を調べる．
*
* Return  : なし．
*
*============================================================================*/
void
gsGetJoyAxis
(
	int				joy_no,			/* ジョイスティックナンバ			  */
	int*			x,				/*-> 左ジョイステッィクのｘ軸の状態   */	
	int*			y,				/*-> 左ジョイステッィクのｙ軸の状態   */
	int*			z				/*-> 左ジョイステッィクのｚ軸の状態   */
);

/*=============================================================================
*
* Purpose : ジョイスティックの左軸の状態を調べる．
*
* Return  : なし．
*
*============================================================================*/
void
gsGetJoyLeftAxis
(
	int				joy_no,			/* ジョイスティックナンバ			  */
	int*			x,				/*-> ジョイステッィクの左ｘ軸の状態   */
	int*			y				/*-> ジョイステッィクの左ｙ軸の状態   */
);

/*=============================================================================
*
* Purpose : ジョイスティックの右軸の状態を調べる．
*
* Return  : なし．
*
*============================================================================*/
void
gsGetJoyRightAxis
(
	int				joy_no,			/* ジョイスティックナンバ			  */
	int*			x,				/*-> 右ジョイステッィクのｘ軸の状態   */
	int*			y				/*-> 右ジョイステッィクのｙ軸の状態   */
);

/*=============================================================================
*
* Purpose : マウスの移動量を取得．
*
* Return  : なし．
*
*============================================================================*/
void
gsGetMouseVelocity
(
	int*			x,				/*-> ｘ方向移動量               */
	int*			y,				/*-> ｙ方向移動量               */
	int*			z				/*-> ｚ方向移動量               */
);

/*=============================================================================
*
* Purpose : マウスカーソルの位置を取得．
*
* Return  : なし．
*
*============================================================================*/
void
gsGetMouseCursorPosition
(
	int*			x,				/*-> ｘ座標                     */
	int*			y				/*-> ｙ座標                     */
);

/*=============================================================================
*
* Purpose : マウスのボタンの押下状態を取得．
*
* Return  : 押されていれば真，押されていなければ偽を返す．
*
*============================================================================*/
BOOL
gsGetMouseButtonState
(
	GMOUSTATE		state			/* 調べたいマウスのボタン       */
);

/*=============================================================================
*
* Purpose : マウスのボタンが押されたか調べる．
*
* Return  : 押されたら真，押されなければ偽を返す．
*
*============================================================================*/
BOOL
gsGetMouseButtonTrigger
(
	GMOUSTATE		state			/* 調べたいマウスのボタン       */
);

/*=============================================================================
*
* Purpose : マウスのボタンが離されたか調べる．
*
* Return  : 離されたら真，離されなければ偽を返す．
*
*============================================================================*/
BOOL
gsGetMouseButtonDetach
(
	GMOUSTATE		state			/* 調べたいマウスのボタン       */
);

/*=============================================================================
*
* Purpose : マウスカーソルの位置を設定．
*
* Return  : なし．
*
*============================================================================*/
void
gsSetMouseCursorPosition
(
	int				x,				/* ｘ座標                       */
	int				y				/* ｙ座標                       */
);

/*=============================================================================
*
* Purpose : マウスカーソルを表示．
*
* Return  : なし．
*
*============================================================================*/
void
gsShowMouseCursor
(
	void
);

/*=============================================================================
*
* Purpose : マウスカーソルを非表示．
*
* Return  : なし．
*
*============================================================================*/
void
gsHideMouseCursor
(
	void
);

/*=============================================================================
*
* Purpose : XBOXコントローラのボタンが押されているか調べる．
*
* Return  : 押されていれば真，押されていなければ偽を返す．
*
*============================================================================*/
extern GSboolean
gsXBoxPadButtonState
(
	GSuint				pad_no,		/* パッドナンバ                     */
	GSushort			button		/* 調べたいボタン名			　      */
);

/*=============================================================================
*
* Purpose : XBOXコントローラのボタンが押されたか調べる．
*
* Return  : 押されたら真，押されなければ偽を返す．
*
*============================================================================*/
extern GSboolean
gsXBoxPadButtonTrigger
(
	GSuint				pad_no,		/* パッドナンバ                     */
	GSushort			button		/* 調べたいボタン名			　      */
);

/*=============================================================================
*
* Purpose : XBOXコントローラのボタンがが離されたか調べる．
*
* Return  : 離されたら真，離されなければ偽を返す．
*
*============================================================================*/
extern GSboolean
gsXBoxPadButtonDetach
(
	GSuint				pad_no,		/* パッドナンバ                     */
	GSushort			button		/* 調べたいボタン名			　      */
);

/*=============================================================================
*
* Purpose : XBOXコントローラの左トリガの値を取得．
*
* Return  : 左トリガの値を返す．(0.0f 〜 1.0f)
*
*============================================================================*/
extern GSfloat
gsXBoxPadGetLeftTrigger
(
	GSuint				pad_no		/* パッドナンバ                     */
);

/*=============================================================================
*
* Purpose : XBOXコントローラの右トリガの値を取得．
*
* Return  : 右トリガの値を返す．(0.0f 〜 1.0f正規化した値)
*
*============================================================================*/
extern GSfloat
gsXBoxPadGetRightTrigger
(
	GSuint				pad_no		/* パッドナンバ                     */
);

/*=============================================================================
*
* Purpose : XBOXコントローラの左アナログスティックの状態を取得．
*
* Return  : 左アナログスティックの状態を返す．(-1.0f 〜 1.0fに正規化した値)
*
*============================================================================*/
extern void
gsXBoxPadGetLeftAxis
(
	GSuint				pad_no,		/* パッドナンバ                     */
	GSvector2*			result		/* アナログスティックの状態			*/
);

/*=============================================================================
*
* Purpose : XBOXコントローラの右アナログスティックの状態を取得．
*
* Return  : 右アナログスティックの状態を返す．(-1.0f 〜 1.0fに正規化した値)
*
*============================================================================*/
extern void
gsXBoxPadGetRightAxis
(
	GSuint				pad_no,		/* パッドナンバ                     */
	GSvector2*			result		/* アナログスティックの状態			*/
);

/*=============================================================================
*
* Purpose : XBOXコントローラの接続数を調べる．
*
* Return  : 接続されているXBOXコントローラ数を返す．
*
*============================================================================*/
extern GSuint
gsXBoxGetPadCount
(
	void
);

#ifdef __cplusplus
}
#endif

/****** ライブラリ設定 ********************************************************/

#pragma comment( lib, "dinput.lib"  )
#pragma comment( lib, "dxguid.lib"  )

#ifdef	NDEBUG
# ifdef _MT
#  ifdef _DLL
#   pragma comment( lib, "gsinput_md.lib" )
#   pragma comment( lib, "gsutil_md.lib" )
#  else
#   pragma comment( lib, "gsinput_mt.lib" )
#   pragma comment( lib, "gsutil_mt.lib" )
#  endif
# else
#  pragma comment( lib, "gsinput_ml.lib" )
#  pragma comment( lib, "gsutil_ml.lib" )
# endif
#else
# ifdef _MT
#  ifdef _DLL
#   pragma comment( lib, "gsinput_mdd.lib" )
#   pragma comment( lib, "gsutil_mdd.lib" )
#  else
#   pragma comment( lib, "gsinput_mtd.lib" )
#   pragma comment( lib, "gsutil_mtd.lib" )
#  endif
# else
#  pragma comment( lib, "gsinput_mld.lib" )
#  pragma comment( lib, "gsutil_mld.lib" )
# endif
#endif

#endif

/********** End of File ******************************************************/
