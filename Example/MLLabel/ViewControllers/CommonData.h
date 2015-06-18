//
//  CommonData.h
//  MLLabel
//
//  Created by molon on 15/6/19.
//  Copyright (c) 2015年 molon. All rights reserved.
//

#ifndef MSLabel_CommonData_h
#define MSLabel_CommonData_h


static NSArray * kCommonListData() {
    static NSArray *_kCommonListData = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _kCommonListData =
        //下面这组数据因为表情过多，比较耗费性能。
//  @[
//          @"[微笑]-[撇嘴]-[色]-[发呆][得意]-[流泪][害羞][闭嘴][睡][大哭][尴尬]-[发怒]-[调皮][呲牙][惊讶][难过][酷]-[冷汗]-[抓狂][吐][偷笑][愉快][白眼][傲慢][饥饿][困][惊恐][流汗][憨笑][悠闲][奋斗][咒骂][疑问][嘘][晕][疯了][衰][骷髅][敲打][再见][擦汗][抠鼻][鼓掌][糗大了][坏笑][左哼哼][右哼哼][哈欠][鄙视][委屈][快哭了][阴险][亲亲][吓][可怜][菜刀][西瓜][啤酒][篮球][乒乓][咖啡][饭][猪头][玫瑰][凋谢][嘴唇][爱心][心碎][蛋糕][闪电][炸弹][刀][足球][瓢虫][便便][月亮][太阳][礼物][拥抱][强][弱][握手][胜利][抱拳][勾引][拳头][差劲][爱你][NO][OK][爱情][飞吻][跳跳][发抖][怄火][转圈][磕头][回头][跳绳][投降]1",
//          @"[微笑]-[撇嘴]-[色]-[发呆][得意]-[流泪][害羞][闭嘴][睡][大哭][尴尬]-[发怒]-[调皮][呲牙][惊讶][难过][酷]-[冷汗]-[抓狂][吐][偷笑][愉快][白眼][傲慢][饥饿][困][惊恐][流汗][憨笑][悠闲][奋斗][咒骂][疑问][嘘][晕][疯了][衰][骷髅][敲打][再见][擦汗][抠鼻][鼓掌][糗大了][坏笑][左哼哼][右哼哼][哈欠][鄙视][委屈][快哭了][阴险][亲亲][吓][可怜][菜刀][西瓜][啤酒][篮球][乒乓][咖啡][饭][猪头][玫瑰][凋谢][嘴唇][爱心][心碎][蛋糕][闪电][炸弹][刀][足球][瓢虫][便便][月亮][太阳][礼物][拥抱][强][弱][握手][胜利][抱拳][勾引][拳头][差劲][爱你][NO][OK][爱情][飞吻][跳跳][发抖][怄火][转圈][磕头][回头][跳绳][投降]2",
//          @"[微笑]-[撇嘴]-[色]-[发呆][得意]-[流泪][害羞][闭嘴][睡][大哭][尴尬]-[发怒]-[调皮][呲牙][惊讶][难过][酷]-[冷汗]-[抓狂][吐][偷笑][愉快][白眼][傲慢][饥饿][困][惊恐][流汗][憨笑][悠闲][奋斗][咒骂][疑问][嘘][晕][疯了][衰][骷髅][敲打][再见][擦汗][抠鼻][鼓掌][糗大了][坏笑][左哼哼][右哼哼][哈欠][鄙视][委屈][快哭了][阴险][亲亲][吓][可怜][菜刀][西瓜][啤酒][篮球][乒乓][咖啡][饭][猪头][玫瑰][凋谢][嘴唇][爱心][心碎][蛋糕][闪电][炸弹][刀][足球][瓢虫][便便][月亮][太阳][礼物][拥抱][强][弱][握手][胜利][抱拳][勾引][拳头][差劲][爱你][NO][OK][爱情][飞吻][跳跳][发抖][怄火][转圈][磕头][回头][跳绳][投降]3",
//          @"[微笑]-[撇嘴]-[色]-[发呆][得意]-[流泪][害羞][闭嘴][睡][大哭][尴尬]-[发怒]-[调皮][呲牙][惊讶][难过][酷]-[冷汗]-[抓狂][吐][偷笑][愉快][白眼][傲慢][饥饿][困][惊恐][流汗][憨笑][悠闲][奋斗][咒骂][疑问][嘘][晕][疯了][衰][骷髅][敲打][再见][擦汗][抠鼻][鼓掌][糗大了][坏笑][左哼哼][右哼哼][哈欠][鄙视][委屈][快哭了][阴险][亲亲][吓][可怜][菜刀][西瓜][啤酒][篮球][乒乓][咖啡][饭][猪头][玫瑰][凋谢][嘴唇][爱心][心碎][蛋糕][闪电][炸弹][刀][足球][瓢虫][便便][月亮][太阳][礼物][拥抱][强][弱][握手][胜利][抱拳][勾引][拳头][差劲][爱你][NO][OK][爱情][飞吻][跳跳][发抖][怄火][转圈][磕头][回头][跳绳][投降]4",
//          @"[微笑]-[撇嘴]-[色]-[发呆][得意]-[流泪][害羞][闭嘴][睡][大哭][尴尬]-[发怒]-[调皮][呲牙][惊讶][难过][酷]-[冷汗]-[抓狂][吐][偷笑][愉快][白眼][傲慢][饥饿][困][惊恐][流汗][憨笑][悠闲][奋斗][咒骂][疑问][嘘][晕][疯了][衰][骷髅][敲打][再见][擦汗][抠鼻][鼓掌][糗大了][坏笑][左哼哼][右哼哼][哈欠][鄙视][委屈][快哭了][阴险][亲亲][吓][可怜][菜刀][西瓜][啤酒][篮球][乒乓][咖啡][饭][猪头][玫瑰][凋谢][嘴唇][爱心][心碎][蛋糕][闪电][炸弹][刀][足球][瓢虫][便便][月亮][太阳][礼物][拥抱][强][弱][握手][胜利][抱拳][勾引][拳头][差劲][爱你][NO][OK][爱情][飞吻][跳跳][发抖][怄火][转圈][磕头][回头][跳绳][投降]5",
//          
//          ];
        @[
          @"github:https://github.com/molon/MLEmojiLabel @撒旦 哈哈哈哈#九歌#九黎电话13612341234邮箱13612341234@qq.com旦旦[太阳][礼物]旦[发呆][得意]啊是大三的拉了[饥饿][困][惊恐][流汗][憨笑][悠闲][奋斗][咒骂]啊是大三的拉了[西瓜][啤酒]链接:http://baidu.com dudl@qq.com 1",
          @"github:https://github.com/molon/MLEmojiLabel @撒旦 哈哈哈哈#九歌#九黎电话13612341234邮箱13612341234@qq.com旦旦[太阳][礼物]旦[发呆][得意]啊是大三的拉了[饥饿][困][惊恐][流汗][憨笑][悠闲][奋斗][咒骂]啊是大三的拉了[西瓜][啤酒]链接:http://baidu.com dudl@qq.com 2",
          @"github:https://github.com/molon/MLEmojiLabel @撒旦 哈哈哈哈#九歌#九黎电话13612341234邮箱13612341234@qq.com旦旦[太阳][礼物]旦[发呆][得意]啊是大三的拉了[饥饿][困][惊恐][流汗][憨笑][悠闲][奋斗][咒骂]啊是大三的拉了[西瓜][啤酒]链接:http://baidu.com dudl@qq.com 3",
          @"github:https://github.com/molon/MLEmojiLabel @撒旦 哈哈哈哈#九歌#九黎电话13612341234邮箱13612341234@qq.com旦旦[太阳][礼物]旦[发呆][得意]啊是大三的拉了[饥饿][困][惊恐][流汗][憨笑][悠闲][奋斗][咒骂]啊是大三的拉了[西瓜][啤酒]链接:http://baidu.com dudl@qq.com 4",
          @"github:https://github.com/molon/MLEmojiLabel @撒旦 哈哈哈哈#九歌#九黎电话13612341234邮箱13612341234@qq.com旦旦[太阳][礼物]旦[发呆][得意]啊是大三的拉了[饥饿][困][惊恐][流汗][憨笑][悠闲][奋斗][咒骂]啊是大三的拉了[西瓜][啤酒]链接:http://baidu.com dudl@qq.com 5",
          @"github:https://github.com/molon/MLEmojiLabel @撒旦 哈哈哈哈#九歌#九黎电话13612341234邮箱13612341234@qq.com旦旦[太阳][礼物]旦[发呆][得意]啊是大三的拉了[饥饿][困][惊恐][流汗][憨笑][悠闲][奋斗][咒骂]啊是大三的拉了[西瓜][啤酒]链接:http://baidu.com dudl@qq.com 6",
          @"github:https://github.com/molon/MLEmojiLabel @撒旦 哈哈哈哈#九歌#九黎电话13612341234邮箱13612341234@qq.com旦旦[太阳][礼物]旦[发呆][得意]啊是大三的拉了[饥饿][困][惊恐][流汗][憨笑][悠闲][奋斗][咒骂]啊是大三的拉了[西瓜][啤酒]链接:http://baidu.com dudl@qq.com 7",
          @"github:https://github.com/molon/MLEmojiLabel @撒旦 哈哈哈哈#九歌#九黎电话13612341234邮箱13612341234@qq.com旦旦[太阳][礼物]旦[发呆][得意]啊是大三的拉了[饥饿][困][惊恐][流汗][憨笑][悠闲][奋斗][咒骂]啊是大三的拉了[西瓜][啤酒]链接:http://baidu.com dudl@qq.com 8",];
    });
    return _kCommonListData;
}

#endif
