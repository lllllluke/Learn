# Basic Concepts 基本概念

## Skeletons 骨架
- 骨架由骨骼和附件等组成
- ![image.png](https://997523841-1323914366.cos.ap-shanghai.myqcloud.com/ObsidianPic202402261437491.png)

## Bones 骨骼
- SRT 骨骼变换
	- 每个骨骼都可以进行缩放旋转跟平移
	- 当一个骨骼做变换时子级也会受影响

## Attachments 附件
- 图片或其他附属物会被绑定到骨骼
- 附件并不会直接绑定在骨骼上
	- 先链接到插槽后插槽绑定骨骼
	- ![image.png](https://997523841-1323914366.cos.ap-shanghai.myqcloud.com/ObsidianPic202402261447489.png)

## Slots 插槽
- 提供绘制顺序
- 插槽位置越高其附件就越位于顶部
- ![image.png](https://997523841-1323914366.cos.ap-shanghai.myqcloud.com/ObsidianPic202402261452023.png)
- 单个插槽下可以放多个附件
	- 但只能显示一个附件

# Images 图片
- 将每张图片以区域附件形式导入
	- 区域附件
		- 附在骨骼上的简单矩形图片
	- ![image.png](https://997523841-1323914366.cos.ap-shanghai.myqcloud.com/ObsidianPic202402261532654.png)

## Images Node 图片节点
- 用以存放图片的路径
	- 相对路径
		- ./images/xxx
	- 绝对路径
		- c:/examples/images/xxx
- 操作
	- 将图片直接拖到编辑区
		- spine会自动创建同名插槽与同名区域附件
	- 选中图片“设置父级”
		- 将其添加到骨骼
	- 按<kbd>P</kbd>键快速选取
	- 直接拖动到插槽中
- 图标
	- 绿色：在项目中使用
	- 红色：在项目中未使用
- ![image.png](https://997523841-1323914366.cos.ap-shanghai.myqcloud.com/ObsidianPic202402261532718.png)
- 同意插槽下多图片不可以同名
	- 但可以同路径

## Draw Order 绘制顺序
- 操作
	- 鼠标拖动
	- 选中插槽后按<kbd>-</kbd>或<kbd>+</kbd>改变顺序
	- 按住<kbd>Shift</kbd>+<kbd>-</kbd>或<kbd>+</kbd>改变5层顺序

## Tree Filter 层级树筛选
- 点击编辑区只会选择已筛选的物件

## Scripts 脚本
- Spine/script

## Photoshop

# Tools 工具
## Selection 选择
- 操作
	- 点选：鼠标左键点击
	- 多选：<kbd>Ctrl</kbd>+鼠标左键点击
	- 框选：<kbd>Ctrl</kbd>+鼠标左键拖动
	- 取消选择：<kbd>Esc</kbd>/<kbd>Space</kbd>
	- 打组：选择后<kbd>Ctrl</kbd>+数字键
	- 快选：打组后<kbd>Ctrl</kbd>+数字键

## Transform Tools 变换工具
- ![image.png](https://997523841-1323914366.cos.ap-shanghai.myqcloud.com/ObsidianPic202402291037359.png)
- 操作
	- 调整数值：<kbd>←</kbd>/<kbd>→</kbd>
	- 微调数值：<kbd>Shift</kbd>+<kbd>←</kbd>/<kbd>→</kbd>
	- 赋予数值：<kbd>Ctrl</kbd>+<kbd>C</kbd>→<kbd>Ctrl</kbd>+<kbd>V</kbd>
- 坐标轴
	- ![image.png](https://997523841-1323914366.cos.ap-shanghai.myqcloud.com/ObsidianPic202402291044836.png)

## Rotate Tool 旋转工具

## Translate Tool 移动工具

## Scale Tool 缩放工具

## Bone Lenght 骨骼长度
- ![image.png](https://997523841-1323914366.cos.ap-shanghai.myqcloud.com/ObsidianPic202402291058368.png)
- 改变父级骨骼长度，子级也会变化
- ![image.png](https://997523841-1323914366.cos.ap-shanghai.myqcloud.com/ObsidianPic202402291100301.png)

## Pose Tool 姿势工具
- 反向运动学IK的方式调整骨骼的旋转状态
- ![image.png](https://997523841-1323914366.cos.ap-shanghai.myqcloud.com/ObsidianPic202402291102887.png)

## Weights 权重工具
- ![image.png](https://997523841-1323914366.cos.ap-shanghai.myqcloud.com/ObsidianPic202402291107351.png)
- ![image.png](https://997523841-1323914366.cos.ap-shanghai.myqcloud.com/ObsidianPic202402291108089.png)

## Create Tool 创建工具
- 操作
	- 绑定骨骼：选中附件后<kbd>Ctrl</kbd>+鼠标左键拖动
	- 重新创建：选中骨骼后<kbd>Alt</kbd>+鼠标左键拖动

## Compensation 补偿功能
- ![image.png](https://997523841-1323914366.cos.ap-shanghai.myqcloud.com/ObsidianPic202402291118740.png)
- 绑定骨骼情况下单独调整附件、骨骼的位置、大小等
- 逻辑：调整时自动以相等数值反向变换

## Options 选项面板
- ![image.png](https://997523841-1323914366.cos.ap-shanghai.myqcloud.com/ObsidianPic202402291132508.png)
- 限制选择/显示

# Key Frames 关键帧
- 骨架动画
	- 关键帧在时间轴上不同位置所设置的不同姿态
- 关键帧设置在动画模式中
## Timeline 时间轴

## Setting Keys 设置关键帧
- ![image.png](https://997523841-1323914366.cos.ap-shanghai.myqcloud.com/ObsidianPic202402291259714.png)

## Transforms 变换

## Rotation 旋转

## Attachments 附件

## Slot Color 插槽色
- 设置插槽的颜色即可改变附件的颜色

## Draw Order 绘制顺序

## Events 事件

## Meshes 网格

## IK IK约束

## Flip 翻转（已移除）

## Shortcuts 快捷键
- 设置关键帧：<kbd>K</kbd>
- 自动关键帧
	- ![image.png](https://997523841-1323914366.cos.ap-shanghai.myqcloud.com/ObsidianPic202402291321581.png)

## Runtime Diff 运行差异

# Animating 动画方法

## WorkFlow 工作流程

### Straight Ahead 顺序法
- 从头到尾按时间的先后顺序去设置每一帧的姿势
- 适合用在基于物理或沿着路径的动画上
	- 跑步
	- 跳跃
- 缺点：容易偏离动画的最终效果

### Pose to Pose 姿势法
- 首先确定动画中最重要的主要姿势而先不考虑动画时长
- 完成主要姿势后，开始调整主要姿势之间的时间
- 最后填补主要姿势之间的运动
- 缺点：主要姿势之间的运动做的不好，最终效果会机械化或断断续续

### Layered&Combined 分层法&结合法
- 将部分动画隐藏
- 先对骨架的一个部位进行动画处理
- 后再整体结合

### Secondary Motion 次级动作
- 对主体动作的反应而产生的运动 
- 最为最后对动画的润色
- 可以使整个动画更加生动自然
- 次级动作延迟于主体动作

### Curves 动画曲线
- 曲线可以让动画师调整关键帧之间过度的速度
- 避免迅速产生的机械感

# Attachments 附件
## Region Attachments 区域附件
- 附在骨骼上的简单矩形图片

### Set up 设置
- 由图片节点下的图片所创建

### Path 路径

## Color 颜色
- 附件的颜色无法改变
- 可以改变插槽的颜色

## Background 背景
- ![image.png](https://997523841-1323914366.cos.ap-shanghai.myqcloud.com/ObsidianPic202402291415772.png)

## Transform Copy 变换复制
- <kbd>Ctrl</kbd>+<kbd>C</kbd>→<kbd>Ctrl</kbd>+<kbd>V</kbd>
- 在层级树中，直接拖动图片到目标附件上

## Mesh Attachments 网格附件
- ![image.png](https://997523841-1323914366.cos.ap-shanghai.myqcloud.com/ObsidianPic202402291419566.png)
- 通过操控网格让图片发生弯曲和变形
- 排除矩形图片中的空白区域

### Set up 设置
- 由图片节点下的图片创建一个区域附件
- 在区域附件属性中勾选“网格”选项

### Edit Mode 编辑模式
- ![image.png](https://997523841-1323914366.cos.ap-shanghai.myqcloud.com/ObsidianPic202402291424297.png)
- ![image.png](https://997523841-1323914366.cos.ap-shanghai.myqcloud.com/ObsidianPic202402291457759.png)


#### Modify 修改
- 拖动顶点与边
- 加选顶点或边：按住<kbd>Ctrl</kbd>

#### Creat 创建
- 创建新的顶点、边
- 鼠标左键点击/拖动

#### Delete 删除
- 删除顶点
- 任意工具下可以通过双击删除顶点

#### Reset 重置
- 将所有顶点重置回四个顶点

#### Generate 生成
- 向网格的内部和边缘添加新的顶点

#### Exit
- 再次点击编辑按钮
- <kbd>Esc</kbd>/<kbd>Space</kbd>

#### Outline
- 轮廓视图可以用于调整UV时可视化网格效果

#### New Mode 新建
- 删除所有顶点并进入新建顶点模式

#### Deformed 变形
 - 同时改变顶点位置跟纹理坐标

#### Edges 边
- 使用创建工具在顶点之间拖动创建一条边

#### Vectices 顶点
- 顶点位置以及它们与三角形的连接决定了网格变形的方式
- 尽可能多地排除空白区域
- 使图片呈现3D效果
	- 在网格中沿着图片轮廓创建中间线
	- 通过拉伸一半网格并挤另一半网格
	- 形成网格立体旋转的错觉

#### Transform Tools 变换工具
- 网格顶点在非编辑模式下可以像其他附件一样使用变换工具进行移动、旋转跟缩放

#### Keying K帧
- 对网格顶点创建动画称为自由变形
	- Free Form Deformation
	- 简称FFD
- 顶点以直线方向过渡到下一K帧

#### Whitespace Stripping 空白区去除

#### Linked Meshes 链接网格
- ![image.png](https://997523841-1323914366.cos.ap-shanghai.myqcloud.com/ObsidianPic202402291531468.png)
- 保存原网格节点和动画

## Bounding Boxes 边界框
- 定义骨架边界
- 击中检测
- 物理用途 

### Setup 设置
- 选择骨骼或插槽
- 点击新建边界框
- ![image.png](https://997523841-1323914366.cos.ap-shanghai.myqcloud.com/ObsidianPic202402291545708.png)

#### Edit Mode 编辑
- ![image.png](https://997523841-1323914366.cos.ap-shanghai.myqcloud.com/ObsidianPic202402291549779.png)

### Transform Tools 变换工具
- 变换工具可以编辑边界框顶点

### Keying  K帧

## Paths 路径
- 路径与路径约束一起使用让骨骼跟随路径

### Setup 设置
- 选择骨骼或插槽
- 点击新建路径

#### Edit Path Mode 编辑路径
- ![image.png](https://997523841-1323914366.cos.ap-shanghai.myqcloud.com/ObsidianPic202402291558569.png)

### Transform Tools 变换工具
- 变换工具可以编辑路径
- 按住<kbd>Alt</kbd>可以移动手柄时不影响到另一侧手柄

### Closed 封闭
- ![image.png](https://997523841-1323914366.cos.ap-shanghai.myqcloud.com/ObsidianPic202402291604251.png)

### Constant Speed 定速
- 使骨骼以恒定的速度沿着路径移动

### Keying  K帧

### Weights 权重

# Skins 皮肤
- 对一组附件进行替换的快捷方法
- 重复利用具有相同骨架但看起来不同的角色的所有动画

# Events 事件
- 在动画过程中触发某件事情的触发器

## Setup 设置
- ![image.png](https://997523841-1323914366.cos.ap-shanghai.myqcloud.com/ObsidianPic202402291648366.png)

## Keying K帧

## Responding to events 事件响应

# Constraints 约束
- 在不使用骨骼层次结构情况下调整骨骼

##  Constrained by 受约束项
- ![image.png](https://997523841-1323914366.cos.ap-shanghai.myqcloud.com/ObsidianPic202402291725458.png)

## Order 顺序

# Inverse Kinematics 方向动力学

## Setup 设置
- 选中骨骼
- 新建IK
- 点击空白创建目标骨骼/选择一个现有骨骼作为目标
- ![image.png](https://997523841-1323914366.cos.ap-shanghai.myqcloud.com/ObsidianPic202402291735576.png)

## Mixing Fk/IK 混合FK/IK

## Keying K帧

# Transform Constraints 变换约束