// C++Test.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include "pch.h"
#include "Player.h"
#include "Npc.h"
#include "Hand.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	Player* p_player;
	p_player = new Player();
	Npc npc;

	cout << "じゃんけんゲームを始めます" << endl;
	p_player -> setName();

	bool gameFrag = true;
	while (gameFrag)
	{
		p_player -> setHand();
		npc.setHand();
		cout << "じゃんけん，ぽん" << endl;
		cout << p_player->getName() << ": " << Hand::getHandName(p_player->getHand());
		cout << " , NPC: " << Hand::getHandName(npc.getHand()) << endl;
		switch (Hand::checkPlayerWin(p_player->getHand(), npc.getHand()))
		{
		case Hand::Victory:
			cout << "あなたの勝ちです" << endl;
			break;
		case Hand::Defeat:
			cout << "あなたの負けです" << endl;
			break;
		case Hand::Draw:
			cout << "あいこです" << endl;
			break;
		}
	}

	delete p_player;
	return 0;
}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
